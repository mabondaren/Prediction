// Model - mathematical model for prediction
// Steps of algorithm :
// 1.)


#ifndef RECOGNIZER_H
#define RECOGNIZER_H

#include <QString>
#include <QDate>

#include "matrix.h"

class DataModel;
class AbstractGMDH;

class Forecaster
{
public:
    Forecaster();

    double Forecast(const QString& i_comp_name, const QDate& i_date);

    double GetTrainingRatio() const;

    void SetTrainingRatio(double i_ratio);
    void SetTimeStep(int i_time_step);
    void SetData(const DataModel* ip_data);
    void SetForecastAlgorithm(AbstractGMDH* ip_gmdh_algo);

private :

    Matrix _GetTrainingDataX(const Matrix& i_matrix);
    Matrix::TVariable _GetTrainingDataY(const Matrix::TVariable& i_vector);

    static int const mg_max_power = 2;

    AbstractGMDH* mp_gmdh_algo;
    const DataModel* mp_data;
    double m_ratio;
    int m_time_step;
};

#endif // RECOGNIZER_H
