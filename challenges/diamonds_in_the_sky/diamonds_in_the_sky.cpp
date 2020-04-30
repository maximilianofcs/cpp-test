#include <iostream>

/**
 * @brief The Sky class: Base class
 */
class Sky
{
public:
    Sky(int stars = 0) : m_stars(stars) {}
    virtual ~Sky() {}

    virtual int stars() const { return m_stars; }

    virtual void stars(int n) { m_stars = n; }

private:
	int m_stars;
};


/**
 * @brief The BlueSky class: derived from Sky
 */
class BlueSky : public Sky
{
public:
        BlueSky(int stars = 0) : Sky(stars) {}
        virtual ~BlueSky() {}
};


/**
 * @brief The NightSky class: derived from Sky too
 */
class NightSky : public Sky
{
public:
        NightSky(int stars = 0) : Sky(stars) {}
        virtual ~NightSky() {}
};


/**
 * @brief The BlueNightSky: multiple inheritance class.
 * Derived from BlueSky and NightSky
 */
class BlueNightSky : public BlueSky, public NightSky
{
public:
        BlueNightSky() {}
};



void readInput(NightSky& nightSky)
{
	int n = 0;
	std::cin >> n;

	nightSky.stars(n);
}

int getAmountOfStars(const BlueSky& blueSky)
{
	return blueSky.stars();
}

int main(int argc, char** argv)
{
	BlueNightSky blueNightSky;

	readInput(blueNightSky);

	std::cout << getAmountOfStars(blueNightSky) << std::endl;

	return 0;
}
