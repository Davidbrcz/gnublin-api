#include "../include/includes.h"
#include "../drivers/gpio.cpp"

//*******************************************************************
//Class for accessing GNUBLIN Module-Portexpander or any PCA9555
//*******************************************************************

class gnublin_module_pca9555 {
		bool error_flag;
		gnublin_i2c i2c;
		std::string ErrorMessage;
public:
		gnublin_module_pca9555();
		const char *getErrorMessage();
		bool fail();
		void setAddress(int Address);
		void setDevicefile(std::string filename);
		int pinMode(int pin, std::string direction);
		int portMode(int port, std::string direction);
		int digitalWrite(int pin, int value);
		int digitalRead(int pin);		
};