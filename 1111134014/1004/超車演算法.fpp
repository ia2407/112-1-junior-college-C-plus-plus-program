10       	 <--SHAPES
11       	 <--LINES
id1
2       	 <--TYPE
456       	 <--LEFT
80       	 <--TOP
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
424       	 <--LEFT
183       	 <--TOP
140       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
我的車速是?
F1

id3
91       	 <--TYPE
364       	 <--LEFT
266       	 <--TOP
265       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
內側車道是否有車, 0=無 ,1=有
yon

id4
2       	 <--TYPE
463       	 <--LEFT
855       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



id6
92       	 <--TYPE
442       	 <--LEFT
363       	 <--TOP
112       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_EQUAL
yon
1

id5
91       	 <--TYPE
170       	 <--LEFT
368       	 <--TOP
133       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
相對車速
F2

id7
91       	 <--TYPE
177       	 <--LEFT
519       	 <--TOP
115       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
相對距離
W

id8
91       	 <--TYPE
447       	 <--LEFT
669       	 <--TOP
94       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
盡快超車


id9
92       	 <--TYPE
161       	 <--LEFT
658       	 <--TOP
154       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_AND
F2|IF_LESS|30
W|IF_GREATER|30

id10
91       	 <--TYPE
185       	 <--LEFT
844       	 <--TOP
94       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
維持車道


  
---- LINES ---- from,to ----
id1,id2
0

id2,id3
0

id3,id6
0

id6,id5
0
YES
id5,id7
0

id6,id8
0
NO
id8,id4
0

id7,id9
0

id9,id8
0
YES
id9,id10
0
NO
id10,id4
0

