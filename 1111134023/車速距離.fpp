10       	 <--SHAPES
11       	 <--LINES
id1
2       	 <--TYPE
926       	 <--LEFT
15       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
START



id2
91       	 <--TYPE
388       	 <--LEFT
211       	 <--TOP
143       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入我的車速
A

id3
91       	 <--TYPE
365       	 <--LEFT
468       	 <--TOP
191       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入我們之間的距離
C

id4
91       	 <--TYPE
381       	 <--LEFT
338       	 <--TOP
159       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入對方的車速
B

id6
91       	 <--TYPE
853       	 <--LEFT
587       	 <--TOP
94       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
盡快超車


id8
91       	 <--TYPE
403       	 <--LEFT
792       	 <--TOP
94       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
維持車速


id9
2       	 <--TYPE
1184       	 <--LEFT
807       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



id12
91       	 <--TYPE
650       	 <--LEFT
100       	 <--TOP
141       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
內側有無車輛
X

id5
92       	 <--TYPE
381       	 <--LEFT
580       	 <--TOP
157       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_AND
A-B|IF_LESS|30
C|IF_GREATER|30

id7
92       	 <--TYPE
658       	 <--LEFT
205       	 <--TOP
112       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_EQUAL
X
有

  
---- LINES ---- from,to ----
id4,id3
0

id2,id4
0

id6,id9
0

id3,id5
0

id1,id12
0

id12,id7
0

id8,id9
0

id7,id2
0
YES
id7,id6
0
NO
id5,id6
0
YES
id5,id8
0
NO
