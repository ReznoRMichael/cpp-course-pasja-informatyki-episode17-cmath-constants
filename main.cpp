#include <iostream>
#include <cmath>
#include <iomanip>  // setprecision

using namespace std;

int main()
{
    cout << setprecision(20);

// ************************************************************************** //

	const float mpi = 3.14159265358979323846;
	const float mpi2 = 1.57079632679489661923;
	const float mpi4 = 0.78539816339744830962;
	const float m1pi = 0.31830988618379067154;
	const float m2pi = 0.63661977236758134308;
	const float m2sqrtpi = 1.12837916709551257390;
	const float me = 2.7182818284590452354;
	const float mlog2e = 1.4426950408889634074;
	const float mlog10e = 0.43429448190325182765;
	const float mln2 = 0.69314718055994530942;
	const float mln10 = 2.30258509299404568402;
	const float msqrt2 = 1.41421356237309504880;
	const float msqrt12 = 0.70710678118654752440;


	cout << "New constants (using const float, new, recommended):" << endl;

    cout << "mpi:      " << mpi << endl;             // 3.14159265358979323846
    cout << "mpi2:     " << mpi2 << endl;		    // 1.57079632679489661923
    cout << "mpi4:     " << mpi4 << endl;		    // 0.78539816339744830962
    cout << "m1pi:     " << m1pi << endl;		    // 0.31830988618379067154
    cout << "m2pi:     " << m2pi << endl;		    // 0.63661977236758134308
    cout << "m2sqrtpi: " << m2sqrtpi << endl;	// 1.12837916709551257390
    cout << "me:       " << me << endl;               // 2.7182818284590452354 stala E - liczba Eulera (Nepera) - podstawa logarytmu naturalnego
    cout << "mlog2e:   " << mlog2e << endl;		// 1.4426950408889634074
    cout << "mlog10e:  " << mlog10e << endl;	    // 0.43429448190325182765
    cout << "mln2:     " << mln2 << endl;		    // 0.69314718055994530942
    cout << "mln10:    " << mln10 << endl;		    // 2.30258509299404568402
    cout << "msqrt2:   " << msqrt2 << endl;		// 1.41421356237309504880
    cout << "msqrt12:  " << msqrt12 << endl;	    // 0.70710678118654752440

// ************************************************************************** //

	cout << endl << endl;
	cout << "Old constants (using #define, deprecated):" << endl;

    cout << "M_PI:       " << M_PI << endl;               // 3.14159265358979323846
    cout << "M_PI_2:     " << M_PI_2 << endl;		    // 1.57079632679489661923
    cout << "M_PI_4:     " << M_PI_4 << endl;		    // 0.78539816339744830962
    cout << "M_1_PI:     " << M_1_PI << endl;		    // 0.31830988618379067154
    cout << "M_2_PI:     " << M_2_PI << endl;		    // 0.63661977236758134308
    cout << "M_2_SQRTPI: " << M_2_SQRTPI << endl;	// 1.12837916709551257390
    cout << "M_E:        " << M_E << endl;                 // 2.7182818284590452354 stala E - liczba Eulera (Nepera) - podstawa logarytmu naturalnego
    cout << "M_LOG2E:    " << M_LOG2E << endl;		    // 1.4426950408889634074
    cout << "M_LOG10E:   " << M_LOG10E << endl;	    // 0.43429448190325182765
    cout << "M_LN2:      " << M_LN2 << endl;		        // 0.69314718055994530942
    cout << "M_LN10:     " << M_LN10 << endl;		    // 2.30258509299404568402
    cout << "M_SQRT2:    " << M_SQRT2 << endl;		    // 1.41421356237309504880
    cout << "M_SQRT1_2:  " << M_SQRT1_2 << endl;	    // 0.70710678118654752440

    return 0;
}
