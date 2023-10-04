19       	 <--SHAPES
18       	 <--LINES
id1
2       	 <--TYPE
990       	 <--LEFT
97       	 <--TOP
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
786       	 <--LEFT
98       	 <--TOP
102       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入
車速

id3
92       	 <--TYPE
730       	 <--LEFT
334       	 <--TOP
160       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_GREATER_EQUAL
對方車速
車速

id4
92       	 <--TYPE
737       	 <--LEFT
660       	 <--TOP
167       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_GREATER_EQUAL
內側車輛數量
1

id5
91       	 <--TYPE
533       	 <--LEFT
659       	 <--TOP
94       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
盡快超車


id6
91       	 <--TYPE
523       	 <--LEFT
345       	 <--TOP
94       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
維持車道


id7
2       	 <--TYPE
551       	 <--LEFT
503       	 <--TOP
70       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
STOP



id8
91       	 <--TYPE
750       	 <--LEFT
535       	 <--TOP
94       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
維持車道


id9
91       	 <--TYPE
559       	 <--LEFT
98       	 <--TOP
134       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入
對方車速

id10
91       	 <--TYPE
293       	 <--LEFT
99       	 <--TOP
166       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入
內側車輛數量

id11
91       	 <--TYPE
571       	 <--LEFT
217       	 <--TOP
134       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入
對方距離

id12
92       	 <--TYPE
1005       	 <--LEFT
495       	 <--TOP
184       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_GREATER
對方距離
30

id13
91       	 <--TYPE
1758       	 <--LEFT
27       	 <--TOP
134       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入
相對速度

id14
91       	 <--TYPE
1749       	 <--LEFT
90       	 <--TOP
134       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
INPUT
輸入
相對距離

id15
92       	 <--TYPE
1033       	 <--LEFT
339       	 <--TOP
134       	 <--WIDTH
50       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
IF_LESS
相對速度
30

id17
91       	 <--TYPE
1357       	 <--LEFT
346       	 <--TOP
94       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
維持車道


id18
91       	 <--TYPE
863       	 <--LEFT
426       	 <--TOP
94       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
維持車道


id19
91       	 <--TYPE
62       	 <--LEFT
530       	 <--TOP
94       	 <--WIDTH
40       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
OUTPUT
維持車道


id20
0       	 <--TYPE
26       	 <--LEFT
416       	 <--TOP
208       	 <--WIDTH
30       	 <--HEIGHT
16777215       	 <--BACKCOLOR
0       	 <--BORDERCOLOR
0       	 <--BORDERCOLOR
-reserved 1-
-reserved 2-
SUBTRACT
車速
對方車速
相對速度
  
---- LINES ---- from,to ----
id1,id2
0

id2,id9
0

id9,id10
0

id10,id11
0

id11,id3
0

id15,id12
0
YES
id4,id8
0
YES
id4,id5
0
NO
id5,id7
0

id8,id7
0

id3,id6
0
YES
id3,id15
0
NO
id15,id17
0
NO
id12,id18
0
NO
id12,id4
0
YES
id6,id7
0

id18,id7
0

id17,id7
0

