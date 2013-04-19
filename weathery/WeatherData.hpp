namespace weathery {

class WeatherData {
public:
    double getTemperature();
    double getHumidity();
    double getPressure();

    void measuremntsChanged();

};

}
