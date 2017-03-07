#pragma once
#include <string>

std::string GetChallenge(int id);
bool VerifyAnswer(int id, const std::string& answer);
