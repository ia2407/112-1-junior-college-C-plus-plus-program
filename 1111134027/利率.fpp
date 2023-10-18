17       	 <--SHAPES
13       	 <--LINES
id1
2       	 <--TYPE
586       	 <--LEFT
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
552       	 <--LEFT
261       	 <--TOP
90       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT

年利率

id3
91       	 <--TYPE
556       	 <--LEFT
196       	 <--TOP
90       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT

本金

id4
91       	 <--TYPE
571       	 <--LEFT
151       	 <--TOP
90       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT

存款目標

id5
91       	 <--TYPE
231       	 <--LEFT
401       	 <--TOP
90       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT

存款年數

id6
92       	 <--TYPE
558       	 <--LEFT
587       	 <--TOP
152       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_LESS
總數
存款目標

id7
0       	 <--TYPE
527       	 <--LEFT
351       	 <--TOP
177       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
本金
年利率
中間值
id8
0       	 <--TYPE
7       	 <--LEFT
574       	 <--TOP
193       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
中間值
存款年數
總數
id9
0       	 <--TYPE
34       	 <--LEFT
827       	 <--TOP
187       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
ADD
存款年數
1
存款年數
id10
0       	 <--TYPE
31       	 <--LEFT
735       	 <--TOP
177       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
總數
存款年數
總數
id12
0       	 <--TYPE
543       	 <--LEFT
717       	 <--TOP
187       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
ADD
存款年數
1
存款年數
id13
0       	 <--TYPE
319       	 <--LEFT
785       	 <--TOP
193       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
中間值
存款年數
多的
id14
91       	 <--TYPE
828       	 <--LEFT
593       	 <--TOP
90       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT

存款年數

id15
2       	 <--TYPE
839       	 <--LEFT
722       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



id11
0       	 <--TYPE
517       	 <--LEFT
413       	 <--TOP
193       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
MULTIPLY
中間值
存款年數
多的
id16
0       	 <--TYPE
544       	 <--LEFT
480       	 <--TOP
148       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
ADD
本金
多的
總數
id17
0       	 <--TYPE
339       	 <--LEFT
592       	 <--TOP
148       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
ADD
本金
多的
總數
  
---- LINES ---- from,to ----
id1,id4
0

id4,id3
0

id3,id2
0

id2,id7
0

id6,id12
0
YES
id12,id13
0

id6,id14
0
NO
id14,id15
0

id7,id11
0

id11,id16
0

id16,id6
0

id13,id17
0

id17,id6
0

