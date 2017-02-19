/** Formatar strings de maneira mais simples.

@author Wanderley Caloni <caloni@intelitrader.com.br>
@date 2015-06
@version 1.0.0
*/
#include <algorithm>
#include <sstream>
#include <vector>
#include <string>
#include <iterator>

struct ss
{
    template<typename T>
    ss& operator << (const T& t)
    {
        _ss << t; 
        return *this;
    }

    operator std::string ()
    { 
        return _ss.str();
    }

        std::vector<std::string> Split(/* const std::string& separator = "\n" */)
	{
		std::vector<std::string> ret;
		std::istringstream iss(_ss.str());

		copy(std::istream_iterator<std::string>(iss),
			std::istream_iterator<std::string>(),
			back_inserter(ret));

		return ret;
	}

    std::ostringstream _ss;
};

