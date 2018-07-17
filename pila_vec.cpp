template<typename tElemento>
inline Pila<tElemento>::Pila(unsigned TamaMax):
elementos(new tElemento [TamaMax]),
Lmax(TamaMax),
tope_(-1)
{}

template<typename tElemento>
Pila<tElemento>::Pila(const Pila<tElemento>& P):
elementos(new tElemento[P.Lmax]),
Lmax(P.Lmax),
tope_(P.tope_)
{
	for(int i = 0; i<=tope_; i++)
		elementos[i]=P.elementos[i];
}

template<typename tElemento>
Pila<tElemento>& Pila<tElemento>::operator=(const Pila<tElemento>& P)
{

	//evitar autoasignación

	if(this != &P)
	{
		if (Lmax != P.Lmax)
		{
			delete[] elementos;
			elementos = new tElemento[P.Lmax];
			Lmax = P.Lmax;


		}

		tope_ = P.tope_;

		for (int i = 0; i < P.tope_; ++i)
			elementos[i] = P.elementos[i];
		
	}


	return *this;

}

template<typename tElemento>
inline bool Pila<tElemento>::llena(){return tope_==Lmax -1;}

template<typename tElemento>
inline bool Pila<tElemento>::vacia(){return tope_== -1; }


template<typename tElemento>const
const tElemento& Pila<tElemento>::tope()
{
	assert(!vacia());

	return elementos[tope_];
}

template<typename tElemento>
inline void Pila<tElemento>::pop()
{

	assert(!vacia());
	--tope_;
}

template<typename tElemento>
inline void Pila<tElemento>push(const tElemento& x)
{
	assert(!llena());

	++tope_;
	elementos[tope_] = x;

}

template<typename tElemento>
inline Pila<tElemento>::~Pila(){ delete [] elementos;}