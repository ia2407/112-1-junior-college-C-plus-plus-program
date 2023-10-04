11       	 <--SHAPES
13       	 <--LINES
id1
2       	 <--TYPE
925       	 <--LEFT
8       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
START



id2
2       	 <--TYPE
942       	 <--LEFT
893       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



id5
91       	 <--TYPE
890       	 <--LEFT
55       	 <--TOP
141       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入我的車速
q

id6
91       	 <--TYPE
891       	 <--LEFT
114       	 <--TOP
143       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
內側有無車輛
w

id3
92       	 <--TYPE
910       	 <--LEFT
179       	 <--TOP
112       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_EQUAL
w
有

id4
91       	 <--TYPE
912       	 <--LEFT
280       	 <--TOP
111       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
目測距離
e

id7
91       	 <--TYPE
911       	 <--LEFT
365       	 <--TOP
106       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
相對速度
r

id8
92       	 <--TYPE
910       	 <--LEFT
489       	 <--TOP
112       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_GREATER
e
30

id9
92       	 <--TYPE
911       	 <--LEFT
619       	 <--TOP
112       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_LESS
r
30

id10
91       	 <--TYPE
745       	 <--LEFT
749       	 <--TOP
94       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
進行超車


id11
91       	 <--TYPE
1140       	 <--LEFT
748       	 <--TOP
126       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
維持目前車道


  
---- LINES ---- from,to ----
id1,id5
0

id5,id6
0

id6,id3
0

id3,id4
0
YES
id4,id7
0

id7,id8
0

id8,id9
0
YES
id9,id10
0
YES
id10,id2
0

id8,id11
0
NO
id9,id11
0
NO
id11,id2
0

id3,id10
0
NO
