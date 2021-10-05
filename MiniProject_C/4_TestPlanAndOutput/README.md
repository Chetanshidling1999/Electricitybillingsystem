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

