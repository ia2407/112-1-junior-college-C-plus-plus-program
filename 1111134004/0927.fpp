14       	 <--SHAPES
17       	 <--LINES
id1
2       	 <--TYPE
889       	 <--LEFT
138       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
START



id2
0       	 <--TYPE
889       	 <--LEFT
198       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
DEFINITION
score


id3
91       	 <--TYPE
858       	 <--LEFT
256       	 <--TOP
134       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入分數
score

id4
92       	 <--TYPE
869       	 <--LEFT
338       	 <--TOP
112       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_GREATER_EQUAL
score
90

id5
91       	 <--TYPE
1053       	 <--LEFT
340       	 <--TOP
119       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
表現優良得A


id6
2       	 <--TYPE
910       	 <--LEFT
815       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



id7
92       	 <--TYPE
680       	 <--LEFT
339       	 <--TOP
112       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_GREATER_EQUAL
score
80

id8
91       	 <--TYPE
676       	 <--LEFT
705       	 <--TOP
119       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
表現不錯得B


id9
92       	 <--TYPE
489       	 <--LEFT
337       	 <--TOP
112       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_GREATER_EQUAL
score
70

id10
91       	 <--TYPE
485       	 <--LEFT
593       	 <--TOP
119       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
恭喜通過得C


id11
92       	 <--TYPE
318       	 <--LEFT
339       	 <--TOP
112       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_GREATER_EQUAL
score
60

id12
91       	 <--TYPE
313       	 <--LEFT
521       	 <--TOP
119       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
好險有過得D


id13
92       	 <--TYPE
144       	 <--LEFT
338       	 <--TOP
112       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_LESS_EQUAL
score
60

id14
91       	 <--TYPE
88       	 <--LEFT
443       	 <--TOP
222       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
請於八月三十日前報名暑輔


  
---- LINES ---- from,to ----
id1,id2
0

id2,id3
0

id3,id4
0

id4,id5
0
YES
id5,id6
0

id7,id8
0
YES
id4,id7
0
NO
id8,id6
0

id7,id9
0
NO
id9,id10
0
YES
id10,id6
0

id9,id11
0
NO
id11,id12
0
YES
id12,id6
0

id11,id13
0
NO
id13,id14
0
YES
id14,id6
0

