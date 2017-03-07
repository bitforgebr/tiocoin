#include "challenges.h"
#include <map>

using namespace std;


std::string GetChallenge(int id)
{
	switch (id % 3)
	{
	case 0: return "Tab or space?";
	case 1: return "Java or C++?";
	default: return "Answer to the Ultimate Question of Life, The Universe, and Everything";
	}
}


bool VerifyAnswer(int id, const std::string& answer)
{
	switch (id % 3)
	{
	case 0: return answer == "space";
	case 1: return answer == "c++";
	default: return answer == "42";
	}
}
