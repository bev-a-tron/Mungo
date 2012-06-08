//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// ---------------------------------------

class Mungo
{
public:
	void TellMeStuff();
	virtual void TellMeMoreStuff();
};

// ---------------------------------------

class Bongo : public Mungo
{
public:
	virtual void TellMeMoreStuff();
};

// ------------------

template< class T > class MungoList
{
public:

	int	nMungos() const;

	void 	AddMungo( Mungo* );
	Mungo*	GetMungo( int index );

private:

	Mungo* m_Mungos[ 128 ];
};
