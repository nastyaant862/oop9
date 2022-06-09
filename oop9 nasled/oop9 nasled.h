#ifndef OOP9NASLED_H
#define OOP9NASLED_H

class Property {
protected:
	int worth;
public:
	Property() : worth(0) {}
	Property(int c_worth) : worth(c_worth) {}
	virtual double nalog() { return 0; }
};

class Apartment: public Property {
public:
	Apartment(int c_worth) : Property(c_worth) {}
	virtual double nalog() { return worth/1000; }
};

class Car: public Property {
public:
	Car(int c_worth) : Property(c_worth) {}
	virtual double nalog() { return worth/200; }
};

class CountryHouse: public Property {
public:
	CountryHouse(int c_worth) : Property(c_worth) {}
	virtual double nalog() { return worth/500; }
};

#endif
