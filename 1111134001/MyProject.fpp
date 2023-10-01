14       	 <--SHAPES
17       	 <--LINES
id1
2       	 <--TYPE
283       	 <--LEFT
63       	 <--TOP
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
281       	 <--LEFT
109       	 <--TOP
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
227       	 <--LEFT
159       	 <--TOP
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
263       	 <--LEFT
221       	 <--TOP
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
481       	 <--LEFT
218       	 <--TOP
162       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
表現優異!得A
score

id6
92       	 <--TYPE
264       	 <--LEFT
293       	 <--TOP
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
476       	 <--LEFT
302       	 <--TOP
162       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
表現不錯!得B
score

id8
92       	 <--TYPE
267       	 <--LEFT
377       	 <--TOP
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
475       	 <--LEFT
384       	 <--TOP
162       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
恭喜通過!得C
score

id10
92       	 <--TYPE
272       	 <--LEFT
462       	 <--TOP
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
475       	 <--LEFT
471       	 <--TOP
162       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
好險有過!得D
score

id12
91       	 <--TYPE
453       	 <--LEFT
598       	 <--TOP
210       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
請於8/31前報名暑修!
score

id13
3       	 <--TYPE
968       	 <--LEFT
434       	 <--TOP
10       	 <--WIDTH
10       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INTERSECTION



id14
2       	 <--TYPE
937       	 <--LEFT
615       	 <--TOP
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
id5,id13
0

id7,id13
0

id9,id13
0

id11,id13
0

id12,id13
0

id13,id14
0

