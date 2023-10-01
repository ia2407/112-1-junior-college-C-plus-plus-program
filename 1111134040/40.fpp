14       	 <--SHAPES
17       	 <--LINES
id1
2       	 <--TYPE
614       	 <--LEFT
125       	 <--TOP
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
612       	 <--LEFT
189       	 <--TOP
75       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
DEFINITION
score
0

id3
91       	 <--TYPE
560       	 <--LEFT
271       	 <--TOP
182       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
請輸入學生成績
score

id4
92       	 <--TYPE
599       	 <--LEFT
369       	 <--TOP
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
813       	 <--LEFT
379       	 <--TOP
159       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
表現優秀得A
score

id6
92       	 <--TYPE
598       	 <--LEFT
480       	 <--TOP
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

id7
91       	 <--TYPE
800       	 <--LEFT
485       	 <--TOP
184       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
表現不錯得B
score

id8
92       	 <--TYPE
600       	 <--LEFT
603       	 <--TOP
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

id9
91       	 <--TYPE
807       	 <--LEFT
597       	 <--TOP
159       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
恭喜通過得C
score

id10
92       	 <--TYPE
598       	 <--LEFT
731       	 <--TOP
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

id11
91       	 <--TYPE
808       	 <--LEFT
730       	 <--TOP
159       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
好險通過得C
score

id12
92       	 <--TYPE
600       	 <--LEFT
870       	 <--TOP
112       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_LESS
score
60

id13
91       	 <--TYPE
800       	 <--LEFT
859       	 <--TOP
207       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
請於8/31前報名暑修
score

id14
2       	 <--TYPE
1183       	 <--LEFT
871       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



  
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
id4,id6
0
NO
id6,id7
0
YES
id6,id8
0
NO
id8,id9
0
YES
id8,id10
0
NO
id10,id11
0
YES
id10,id12
0
NO
id12,id13
0
YES
id13,id14
0

id11,id14
0

id9,id14
0

id7,id14
0

id5,id14
0

