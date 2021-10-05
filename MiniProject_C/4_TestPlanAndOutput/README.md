## Table no: High Level test plan

|**Test ID**|**Description**|**Exp i/P**|**Exp O/P**|**Actual O/P**|
| :- | :-: | :-: | :-: | :-: |
|H\_01|Electricity bill calculation at urban areas|Choice|SUCCESS|SUCCESS|
|H\_02|Electricity bill calculation at rural areas|Choice|SUCCESS|SUCCESS|
|H\_03|Units consumed per year|Choice|SUCCESS|SUCCESS|
|H\_04|Calculates total industrial loads|Choice|SUCCESS|SUCCESS|


## Table no: Low Level test plan


|Test ID|HL\_ID|Description|Exp input|Exp Output|Actual Output|
| :- | :- | :- | :- | :- | :- |
|L\_01|H\_01|Electricity bill calculation at Urban areas if(units<30)|22 units|71.5 rupees|71.5 rupees|
|L\_02|H\_01|Electricity bill calculation at Urban areas if(units>30 && units <100)|50|235|235|
|L\_03|H\_01|Electricity bill calculation at Urban areas if(units>101 && units <200)|150|937.5|937.5|
|L\_04|H\_01|Electricity bill calculation at Urban areas if(units<200)|230|1,679|1,679|
|L\_05|H\_02|Electricity bill calculation at Urban areas if(units<30)|12|<p>37.8</p><p></p>|<p>37.8</p><p></p>|
|L\_06|H\_02|Electricity bill calculation at Urban areas if(units>30 && units <100)|67|294.8|294.8|
|L\_07|H\_02|Electricity bill calculation at Urban areas if(units>101 && units <200)|134|797.3|797.3|
|L\_08|H\_02|Electricity bill calculation at Urban areas if(units<200)|344|2,339.2|2,339.2|


## Table no: High Level test plan

|**Test ID**|**Description**|**Exp i/P**|**Exp O/P**|**Actual O/P**|
| :- | :-: | :-: | :-: | :-: |
|H\_01|Calculation of abs(...) Absolute value|Choice|SUCCESS|SUCCESS|
|H\_02|Calculation of min(...) Minimum value|Choice|SUCCESS|SUCCESS|
|H\_03|Calculation of max(...) Maximum value|Choice|SUCCESS|SUCCESS|
|H\_04|Calculation of sum(...) Summation value|Choice|SUCCESS|SUCCESS|
|H\_05|Calculation of mean(...) Mean value|Choice|SUCCESS|SUCCESS|
|H\_06|Calculation of avg(...) Mean value|Choice|SUCCESS|SUCCESS|
|H\_07|Calculation of median(...) Median value|Choice|SUCCESS|SUCCESS|
|H\_08|Calculation of var(...) Variance value|Choice|SUCCESS|SUCCESS|
|H\_09|Calculation of sin(...) Sine value|Choice|SUCCESS|SUCCESS|
|H\_10|Calculation of cos(...) Cosine value|Choice|SUCCESS|SUCCESS|
|H\_11|Calculation of tan(...) Tangent value|Choice|SUCCESS|SUCCESS|
|H\_12|Calculation of arcsin(...) Arcsine value|Choice|SUCCESS|SUCCESS|
|H\_11|Calculation of tan(...) Tangent value|Choice|SUCCESS|SUCCESS|
|H\_12|Calculation of arccos(...) Arccosine value|Choice|SUCCESS|SUCCESS|
|H\_13|Calculation of arctan(...) Arctangent value|Choice|SUCCESS|SUCCESS|
|H\_14|Calculation of sqrt(...) Square root value|Choice|SUCCESS|SUCCESS|
|H\_15|Calculation of cbrt(...) Cube root value|Choice|SUCCESS|SUCCESS|
|H\_15|Calculation of log(...) Logarithm value|Choice|SUCCESS|SUCCESS|
|H\_15|Calculation of exp(...) Exponentiation (e^x) value|Choice|SUCCESS|SUCCESS|
|H\_15|Calculation of Matrix operations value|Choice|SUCCESS|SUCCESS|
