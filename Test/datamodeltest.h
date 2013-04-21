#ifndef DATAMODELTEST_H
#define DATAMODELTEST_H

#include <QObject>

class DataModelTest : public QObject
{
    Q_OBJECT
public:
    explicit DataModelTest(QObject *parent = 0);
    
private slots:
    void GetRawDataTest();
    void GetRawDataTest_data();

    void IsValidTest();
    void IsValidTest_data();
};

#endif // DATAMODELTEST_H
