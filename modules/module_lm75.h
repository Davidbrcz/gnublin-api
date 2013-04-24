#include "../include/includes.h"
#include "../drivers/i2c.cpp"


class gnublin_module_lm75 {
	bool error_flag;
	gnublin_i2c i2c;
	std::string ErrorMessage;
public:
	gnublin_module_lm75();
	const char *getErrorMessage();
	bool fail();
	void setAddress(int Address);
	void setDevicefile(std::string filename);
	int getTemp();
	float getTempFloat();
	short getValue();
};
