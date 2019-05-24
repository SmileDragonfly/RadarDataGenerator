#pragma once
#include "TestData.h"

class CCreateData
{
public:
    // Functions
    CCreateData();
    ~CCreateData();
    void GenerateDataToCSV(CString FileName, CArray<CPoint>* arr, int numberOfPoint);

    // Variables
    CTestData m_testData;
};

