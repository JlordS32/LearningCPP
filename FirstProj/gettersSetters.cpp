#include <iostream>

class Stove {
    private:
        int temperature = 0;

    public:
        void setTemperature(int temperature) {
            this->temperature = temperature;
        }

        int getTemperature() {
            return this->temperature;
        }
};

int main() {

    Stove stove;

    stove.setTemperature(100);
    int temp = stove.getTemperature();

    std::cout << "The temperature is: " << temp << "'C" "\n";

    return 0;
}