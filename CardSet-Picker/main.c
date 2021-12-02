#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <time.h>
#include <math.h>

#define IMAGE_NUMS	(10)
#define IMAGE_0_ROW	(58)
#define IMAGE_0_COL	(100 + 1)

struct imageText
{
	char data[IMAGE_0_ROW][IMAGE_0_COL];
}typedef s_imageText;

s_imageText imageText[] = 
{
	[0].data = 
	{
		{"zBD55ww w ,WWwyW j5jww      ,,,,,,,,                                                           ,    \0"},
		{"yDBy,wyy5885jjwj8BBz889B5,                                                            j             \0"},
		{"y, y5zE9Dyyy9ZE98Dy5DDy58Z85                                                          ,,            \0"},
		{"E9zBByWw58E889888zzDW,5Dj  yBDw                                                                     \0"},
		{"zDBDzBByDW8z98BBD5yDBzBjj5Dj  jy                                                                   ,\0"},
		{"8BBDBjyw,zBBBzzzzDD5jwWyBzjyDW  W,                                                             ,,   \0"},
		{"zzzzz88ByB898zBBBzBBBDyj, jBBD5w,wW                                                        ,,,,,,,  \0"},
		{"9zzz85yzDyzE998BDDzzzBD5jjWWW5z5jw,WW                                                 ,,,,,  ,    ,,\0"},
		{"8zz85DD85DBBzB555yWjy5DD5jW,wwjB8yW W5w                                              , ,          ,,\0"},
		{"8zB5zzDDj5yyjWjjjjjWWjjjy5yjw  j58zj,,yW                                      ,  ,,     ,  ,,   ,   \0"},
		{"88D9BD5yyjWWwwWWWWWWWWWWjyy555W  WBEyw yj,,     ,   w                      ,,,,Ww,w,w,       ,, ,, ,\0"},
		{"zyz8BDy5jjWWWWWWWWWWWWWWWwWWj5DDy  wZDW jWw    ,jjjjWw                    ,,,           ,w  ,,,  , ,\0"},
		{"DDzB5y5yjjWWWWWWWWWWWWWWWWWwWWwwjDzW Zzw jW,wWwwww,wWW,          ,,,  ww,  ,    ,,    ,,,, ,, ,,,,  \0"},
		{"B99D5yyyjWWWWWWWWWWWWWWWWWjWW,jz98DBW ZEW 5j ,w,wjWjjj5           ,,   ,           ,,,,,  ,,       ,\0"},
		{"B88y55yyWWWwWWWWWWWWWWWWWWWwj8EzW  ,5W 9ZW 5W  Wyyjj5y5y     ,,, ,         ,  ,W ,,,,,,       ,WjWWw\0"},
		{"z98555yjWwwwwWWWWwWWWWWWWWW5E9W wzZZE8DWEZ, Dw  ,y5y5yyBj            ,,,,,,,,,,,, w,,    ,w,wwWWwWWW\0"},
		{"88955yyjWWWWWWWWWwWWWWWWWWjDDw 5E, 8yDD5yZZ,jBj,  wWjyj5B     ,   ,        , ,, ,,     ,jwwwww,wwWww\0"},
		{"z88ByyyjWWwwwwWwwwWwWWWWjWjjyW8ZZzyB,wWwwWZEwB5jw,,,WyyyyD  ,,,      ,,,,,,       ,wWwwWw ,wwwwwwWww\0"},
		{"zz9E5j5yjWwWWWWw,,wwWWWWWWjj5j9E8yjyjWWw   E5yD5WWjwWwwWy5j        ,         ,yw,, wWWwwWjWw,ww,wwww\0"},
		{"zB899jjyjWWww, W5BzDyyjjWWWjyyjWWWyyjjyjWw,wE5DDWw5yWjWjjyB    ,        ,,wWW,,w,,, ,wWwwwww,,,,wWWw\0"},
		{"8BBBE9yyyW, jBEZEB5jyyyyjWwwWy5yWWjjjjjyj,W 8y5zyw,55jjWjjjD         WWwwww,wWWw,,,,,wWww,,w,,,,,,ww\0"},
		{"8zBz8EzyjjjD9zj    ,wWWjyjWw, ,WyyjWWWjjWW,,W8WzByW,WyyjwWyD5    wwwwW,,www,, ,w,,,, ,Wwwwwww,,wwwwW\0"},
		{"88zBDz9B5z9zW    585DByjjyyWWw,  wjjWWWjjywW 8y5D5yw,Wy555yyzW Wwww,ww,, ,wWWwwWww,ww,wwwwwwww,,wwww\0"},
		{"899zBB8z9EywwwWEZZZB B5jWjy5jWjw  wzDjjjjjWW 5zyDDyj,Wyjj5zB5D, w,w,www,,,,wwwwwWwww,,,wwww,wWwwWWWw\0"},
		{"8898zDBB8DWy55ZD599DjjjWwWjyyjjjj   wByjjyyjW,955DyyW,W5D5yyBB5  ,,,,,,,,,,www,wwww,,ww,wWwwwWWjWw,w\0"},
		{"888888B8BEB5B8Ez5jWWjjWWWwWjyyyjjjw  w5yyjWWj EDjBzyWW,,wW55558j ,,,,,wWwww,,w, ,,,,,wwwj55yjWw,,,w,\0"},
		{"z88888zzBB85jy55yjjWWWWWwwWWyyyyWWjy 5jWwwwwj EzyW9zjwWw,,,wwyD8, ,Www ,,w,w,    wWwWyjjWW,         \0"},
		{"889888888DB9jWWWwwwwwWWwwwWW5yjjyy5Bjj   WBD5 ZB8Wj9z5,Wjwwww,,y8  ,,    ,  wwWjyWjWw,,,,           \0"},
		{"888988z98B598jjjWWwWwWWWWWWjy555DB5jw, W8Zjyy Z5ED,5885wWyWw,WWwyD   ,, ,j   WWjWww ,               \0"},
		{"9989988898DDEDjjjjWWWWWWWWWWWWWWw,  ,y9EyWWjW ZWZDywDzz5W,j5jw,wWBj ,WWjyjWwjjw                     \0"},
		{"DE98898889zj9EDyjjjWWWWWWWWWWWww, WzE988B5yW wZWEEDWWyzB5jwWyyjW,j5WjWWWWWW,                        \0"},
		{"5zE989988895DZE8DyjWWWWWWWWWWWWyDZZZ88z5WWw  zZ5zEZ5wwD8BDjwWWjyjw,w                            W8Z8\0"},
		{"yjDE9889889D59EEZ8ByjjjjjjjWWWj5yjyyyWw,,WW  ZEB89EZz  B8zDjWWjjyyyy                       WB9E8y   \0"},
		{"DD5DEE889898yz99EZZE85jWwwwwwwwWWWWWww,wWWj5EZE8BE89ZEw yZ8Dyjywy5yWD8y                BEZ8y        \0"},
		{"DB5yjzZ98989zDBz99EZZZZZ9zB5yyjWw,     ,wWWWj59zz9889EZz  89BDyyW55yWW588W        jzZZB,       ,58Z9\0"},
		{"5jy5yyBEZE989BDzzzzzzz89EZZZZZZZZZZZZEEZE8zDjWjBDBzz89zBzW W88D5WjyE8j,jyDBByjwD8Dw        jzEZE98zB\0"},
		{"y5DBD55yB9E999BDDBBBzz889988zBBzBBB8ZZZZZZZZZZ98888E88ZZE9B, WB5D5,,y995j       ,,W  ,yzEZE9zBBBBDBB\0"},
		{"yDD55yy5DB9E9998zz8888zBBBBzz888BDByjzD59EZZE9zBB8DDDBzzZZZ9zW , w5w,,WyDBBB5yW,  ,wjB9EEzzBBBBDBBDB\0"},
		{"yD5jy5DD555z9E9E8BBBz9999888888889zz8jzDww58EZZEBD5D55yjwwjDz88zDWWjyw  ,,wwjyyyDBB5jW,w5DzBDBBBBDBD\0"},
		{"jy55DD5yy5DBBB9EE9zDDBBz88898888BBD5Dz5Dz5WWWy899Ez8ByWwj5yjw,,wjjjWjyyWWWww,, ,,   ,,jwwyBBDDDDBDBD\0"},
		{"jwyDBDjj5D555DB89EZE8BDDDBzBzDD8zZ9zyyjjB55jyjwWDByD5B9z5w wjyWWwww,,, w,,,,wWWWWjjyyy555wjz8zBBzzzD\0"},
		{"j,W5D5DBD5y5DD5yB8EEEEZE999999DDyDEZEZEBjWyjWWy5WjBBDjwjD8ED,,WjyyWW,,,,wwww,,www, ,,,WDBDjW5DD5yjWj\0"},
		{"jWWyjWDBDyDD55DD5Dz8EE999EEEEE9ByjjBEzzEZZ8DyW, wW,j599Dy ,BZEDyW55DDyjWWWWw,    wWW,    5Bjyjjjjjyy\0"},
		{"W,WWwj5DyDD55DDD5DD5Dz998zDB8ZE99ByWB9Dz5jEZZEEzjw ,  ,yD8D,  5zBy5DB888zDBBzzzBD5jWWyj,   5yyyyyyyy\0"},
		{"WwjW,WjWyBDy5DBBBD5D8EE98899B9EZEZEBBzzzE9DjD5BZZZ9Byjw, w5B5W  jBz5, jDD55DD55D5555DBB8B   ,5yyyyyy\0"},
		{"wwWw,WW,jD55DD5y55DB8DEEEBDyjyDzEZZZZZZZZ888yyW,WB99zzDywwwwy55DW ,5EE5,Wy55j5BzD5yy5y5B89D   jyjyyy\0"},
		{"yWj,WWw,WWW55yy5DDB55zEjE95 j5yw       wyzZZZE8ByWw Wj5zzyw,wW5DDDyw WzZ9D5DD5jwyBzD5yjW5889W  wyjWy\0"},
		{"5jj WjW w,5B5y5D5555DE5,zDD5By              y9ZEz55yj,  WB95,jj5zz9EEBjyDzzBBzzzDyy55jW55Bz99D   5yj\0"},
		{"5jwwWj, Wyyy555yyDD55ZjjzEBW    ,wWWWWWWWw,    WB8B5yBDy  WBBw,WWDzzEZ9Dy5zDDDDB898zzBj wWDzDBEw  5D\0"},
		{"Dyw5ww jyWWWjyy55Dyj5Z55W,   wjyyjjWWjWWWWWWWw,  WyBDjyBDj, D8z5jWWDB5Bz8B5zzBDW y9EEEED, wDEz5zy  W\0"},
		{"5yjywjDyjWWWWjjy5y55BZw   wj55jWwwww,wwwwwwWwWWWWWWjy5yWBZE5wW5BBDByD88zDD8B5B9E8w  5ZZZ8j, 5E8yzB  \0"},
		{"5jyy55yjWWWWWjWjy555yZBWjjWw   ,,,,,,,,wwwWWwwwwwWWj5DzDWWzZ85yWj5BzBjB88BBBzBBz998j  WZZZ85 wZD5zD \0"},
		{"z5zB5yjyjjjWWWjjyy55jDyzjjj5www,,w,,w,w,,wWWWWWWWWwwWj5B9y,W8Z85D5y5BEzyBz8zD888999BBy  DZz58WW9jjzw\0"},
		{"98zBB55yyjjjWWWjjyy5BBy,D58j,WWWwww,w,,w,,wwWWwwwWWWWWWjDEzWwjZZBzD5jyD8BB898zBz88EZ9BBj,5ZEWz5y8yyD\0"},
		{"jZ9zBDD55yyjjjWjjyyyDz8 yBBwwwWwWwwwww,w,,w,wWwWWwWWWWWWWDZ8yywy88zzDBDB9Bzzz88B88899985DwjEzDyD58Bw\0"},
		{" ,ZZzBBD555yjjjjjjjy5B9 jz5WwWWwWw,w,,,,,,ww,wwWwwwwWWWWw,DZ9jD5w5WWB5DBzE88E9zzB8999BB8DWyz85zjyjBB\0"},
		{"W  9Z8BBD55yyyjjjjyyyBEW,zD,,WWwWwwwwwwww,,,,,,wwwwwWWWwWw,5EBDDB5ZzBD5Dyz8Bz89zE8889EzyB9yz9WwzB5jD\0"},
		{"Ww  ,8zzzBBDD5555yyyyyzDwDj,WjWWWwwwwwwwwww,,,w,,,,,wwWWWw, 5DyD5z58zzzBB5z888zDB88889E9jj5D88yw5B55\0"}
	},
	[1].data = 
	{
		{"                                                , ,,,                                               \0"},
		{"                                        ,,jWyB8DBEBB9z5wWjDDw                                       \0"},
		{"                                      wjy       ,yDyj5595WzD8zWWj                                   \0"},
		{",,,       ,,,,,,,ww,,,,,           ,wyWyDj   W,     BD8Byjw5D8EB5yy                                 \0"},
		{"               ,,,,,              W B yy55BZZZEZZZD  ,y9EZDjWjyD5y5yw                               \0"},
		{"              ,  ,               Dy  y5yBzzB5DBz89ZZEW j5yzz5yBzE5ww5W                              \0"},
		{"           ,                   w5yy5y  yD5Bzzz8z9ZEz9ZB  B5,w y5ZZDw5yw                             \0"},
		{"              ,      ,,,,,,,  ,5j,jWWWzDy5DDD5Ww,,,j5z98 W8z95Ww 59Wj5j,                            \0"},
		{"             ,       ,,       8 y,z8z8z5yjwwWwWjjyy5558Z5 zE85DZj Ej Z5W                            \0"},
		{"         ,,,,,,    ,,         Wy5zZZ98yWWWWwwwwWjjyyyDB98,yzE9j8z jZw,Zwy                           \0"},
		{"                             WywyzzyjW,wwwwwwwWWWwwWWjD9E zEBz58ZW 95jj5,w                          \0"},
		{"                             wy5Z985jjWwwwwwwwwwwwwwWWyz9wy99B5DZ5j 89,EWj                          \0"},
		{"                             jz5ZzjWW,,wwwwwwWwwwwwWWWWD9yjB98DW9EWDwBjy8Wy                         \0"},
		{"                            WjZyZ5wWWwwwWWwwwwwwWwwwwWj58zBy8zB5D9j9 8BjD z                         \0"},
		{"                            5 EBD      ,wwWWWww,,      jz88Wzz8B8zyDyy8yDyj5                        \0"},
		{" ,,,,,,,,,,,,,,,,,          zwZBzBzEE985w,wWWwWj5z9EE9zz9E9wzBz8z9EwB DWyj,D                        \0"},
		{"                          w zWE8yDj ,wyzBjwjjWj5BD5WWwj58E8jBD88B8EyB,BWB5,5w                       \0"},
		{"                          W 58DD  yDBBW ,jWWWWjj,  ,  , yE95Dy89z8EWZwwD5jjjB                       \0"},
		{"                         WW y95yDEZZzZZZ85y,,wWjjzZZZZZZZZ9D5Dz8z8Z,Z5WWDjBw8 Ww                    \0"},
		{"                         y, 5ZZD,   wW5jyyy,,wjjy8DjjwwyDE9z5Dz9z89WE5zw5W8  D9,                    \0"},
		{"                         9W WZz,  ,wwwwWjjj,wwyWw,,WjWW  yE95By9899j8DzW5D ,yB                      \0"},
		{"                        ,BW wZZ  ,wwwww,,,,,wwWWww,,,www 5E9DByz8995y8Byy w5y                       \0"},
		{"                        j95 ,9Z  ,wwww,,Ww ,wwWw,,,,www, DE9BD58898By9z9  jwW,        wB98          \0"},
		{"                        jDj ,8Z, wwwwwwy8  wwwjjWDWw,ww, zE8zB5E8988j8E, jj 8w     W58E8j           \0"},
		{"                       W5DW,,9Ej wwWWWDBw  ,,,  ,95Djww, 8E88zBZZZE9wE8 WjW Z    w5Bzy              \0"},
		{"                       yW5y,w8Z9wwWWjyyWy5555z8zDjwWyyjwW8E89ZB  8ZEWZ  jw  Z  ,j5D5        ,W      \0"},
		{"                      ,Dy5WWyy88WWjjjW,    WWj,      WWjy89zZE    ZZDB WWw 8z W5DDW     W5z9Z8      \0"},
		{"                       z B Wy EZjjWwwW8zBDBBDBB8zzDzZZyWw89zZ8 yy  ZZ ,Dywwj wy55    W5Dz8B,        \0"},
		{" jDj                   8DZByjwBZBjWw,jBzZB,  w , 5DZ9ywwj98zZz yjW Zj     ,jy55j  j5y5BBw           \0"},
		{",yj5                  ,y zBDDwjZZEjjWWj,DZ99z98ZEZZ5wwjjyEzzEZ DD5 W  WW, ,,jDj wWW5BD,             \0"},
		{"WyjB                  wZB 5595WE9ZEyWww,,jBzzzzzBywwjyyWBEzDEZ  Wjw  jWw,WWw, wWWyDB,    WBEB       \0"},
		{"jyjB                   z9Bz DDyBZ9ZZzw ,,,,wwjWwwWWWWjjy898D8ZW jjW j5W,wWy5jWWyyy,   ,5B89W        \0"},
		{"wWwD                   88W99j,,w8ZZZZZB    wwwwwwwwwWjDz988z8Z  Dy  WjWwjjw  ,Wy5  wy558zj          \0"},
		{"wWw5                   BZzBBzZB W wEEZZZj   ,,,   ,wyz989988EZ    ,jjWWwWw ,yyW, ,Wy89D             \0"},
		{"WW,j                 w z98D9z98DBZD89EEZZZBjWwwwj5zEZE888z89Zy ,wWWWWjwwW WWw,,wyD8z,               \0"},
		{", ,W,                y yzBDzE98zWEBBEZE9988EZZZE98zB55zz8Bz9ZZ WWWWwwWww w  ,wj5BW                  \0"},
		{"WWWy5             WW 5,jE8zzDy8Ey8EB5ZEZ8zDD5DDBDD55D9DDz5zEZZ  WWWWWWwwjj j5y5y                    \0"},
		{"jjjD,           ,,wW Dw,95yzEz98DDBZ9z8Z9BD5yyyyy555DDj5BDBE9Z9 ,WWWWWWW, ,jyy5W                    \0"},
		{"WWWB         wj,     zj,Z8BE88EDzBDDZZzE88D55yjjjjj55jy5BD89EZZ  wwwWWW  ,yyyjyW                    \0"},
		{"WW5w           wW,  ,Ej,98BEBE8ZBz5DD89ZzDD55yjjjy5yWyyjD899E8ZZ  WWjw,wwyDD5jyy                    \0"},
		{"jjB        ww ,w  y y9wWED8B89EZDB5E8E8ZEzB55yjjyjjjjjjjz989E89ZZ  ,W  WWjWWyjy5                    \0"},
		{"jDw  ,,   ,W ,w , j D9wy9zzz999BzZDWZZ89ZzB555yyyyyyyj58zz88989EZZE wWWWWjyyyWWW                    \0"},
		{"By  ,,    ,,,,w  zDW98wBz8z8999zZZZWBZEEE8BWjjjyyyjjyDBBW89E989998ZZ  w5yjyjWWWjj,                  \0"},
		{"5   w,   ,Wj w,, Z,B88 8B889EEzEEZZZ 9ZZEEzyjyyyy555D5yWDE8E98998zEZZw  55yjWWWjjj   ,              \0"},
		{"    ,w   Wjj W  yEw9yy E88E999zZEEEZjDZZZZzWyyyjjyj55yjyEE8E98E9z898ZZj  WWwwWWWWjj                 \0"},
		{"     W,  jj, , ,ZZjz8 5999E998zZEEEZzyzZZZBwWjyjjjjDWwWZZZ899998z999EZZz  jjWWwwwWjj       ,,       \0"},
		{"     ,j  yw w, 8Zz5BW EZE999E98ZEEEZZW8ZZZ8wjjWjyjjjWDEZEZ9z9E9889899E8ZE  wWWwwwwWjW  , ,,,yjjW ,w \0"},
		{"      WW jw,w yZ8yz5 zZZ9899E98ZE99EZW8ZEZzWjWjjjWwDB9ZEEEE988988989EZzz9Z  WWWwwwwWj,      j, ,www \0"},
		{",,   , 5 yw,W ZE9z5 yZZ98999E98EE9EZ95zZEZwjjwWwWWWD5ZE9E9EEE88889899EE5zZZ  WWWwww,  ,ZZ5W,  w,,   \0"},
		{",www , w55W,jjZ8zj jZZ88999E99E8E99EE5EEEZ,wwwwWw,ByZ889EEEEE98898999EZB59ZZ ,ww,   yZZy y9w,w,,Wjjw\0"},
		{",wwwWw, jB  jBZzy yZZE9999E999E88E9EEjZZ9ZjjjWWjW,8BEDEEE9EE998988999EZED8EZW    DZZZ  ,,   w,,,,,,,\0"},
		{",,,wWw, ,5  DZEy 8ZZE989EE98EE98999Z5zZZEEyyWjwywwEEBBZ9EEZE99z988899EE99BZZ59ZZZZw   ,wWWw  Ww,,,, \0"},
		{",,  ,w,,B5, 9Zyw8ZZE988988999E8899895EEEZ9yDyjjWjj8959E8E9EE9889z99899E8EBEZ      ,wwWwwwWWW  ww,,, \0"},
		{",w,,wWw,yjy Z8B9ZZ998899999989zE8989zE9EZjw888DjBBB9yZ89999E8z9889E9z8Z9Ez9Z,55WwWWWWWwwwwWWW,      \0"},
		{"   ,,wjj5ZDwEB99ZE89z9E89E89zz8E89888999Z     ww9j8yWZ8998EEz8888999Ez8999Z9  W5WwWWWWWWwWwwWjW    ,\0"},
		{"www,,     j9E95ZZ9z89988E888888988z89999ZD  w   , Z 8Z8999898z888E9989888E89 ,wj5WwWWWWWwwwwWWWjW , \0"},
		{"wWWWwWjy5jWZZBzZZ88899899j989z8888999999ZZw    Ww Z zZ8898898z98999E99998E9z  WjDz,wWWWWWWwWWwwWjW, \0"},
		{",wwWwW,,wWj98zEE9899988EyD9988E9999999889yyj   W ,z 8E9999998z98E9E99999E9Z55wWj59zwWWWWWWWWWWWWWWjw\0"}
	},
	[2].data = 
	{
		{"          ,,                                                                                        \0"},
		{",,,,,,,,,,,,                                             ,,,wWjWWyjw                                \0"},
		{",,,,  ,,                                         ,,     ,WBZBW      ,                               \0"},
		{"                                               wW   ,wwWjW,jwBB    ,,jW,, ,,w ,                     \0"},
		{"                                              WW,wW,      wWByBW , wwj5jjj,,wwwj                    \0"},
		{"                                            ,Wj,,,   ,j5D5WjBy Ww,j,ww5D Bw wWWWj                   \0"},
		{"                                            wy,  ,jzZZEZZZ95D9,5zWyW,Wy5wWzw WWwWw                  \0"},
		{"                                           Wyw  z8ZZ9B5yyWwwWBzjzw5jwWjyy zy wjwWW                  \0"},
		{"                                          j5W  8Z9zj,      ,,W5j5wyjwW5W5 DDw jWWWW                 \0"},
		{"                                         jDW  DZzyw,,,www,wwwWjyWwyjWyyj5Wyz5 wjwWW,                \0"},
		{"                                        W5w, j8DWwwwwwww,wwwwwW5WjB5j5555jjBBW jjjWW                \0"},
		{"                                       ,jW  ,85jw,,wwwww,,    wyWjD5WDyB5WjyDj wjjjw,               \0"},
		{"                                       WW,wWjy  ,,,wwwwwww,  ,wyjWyjyDyB5j5jBD,,jyjWW               \0"},
		{"                                      w, wDjEZ8Byw,wwwwwwwww,wwjjWyW55jD5wDjDBj wjjWW,              \0"},
		{"                                        y8yw,  W9EDwwwww,,     wWjjjjyDDBw5yWDjw jyjWW,             \0"},
		{"                                     WWDBBWy8ZB   WW,wwWyzEZE9D5jywj5WDBDW5Dy5BjwwjjWj,,            \0"},
		{"                                   wjy 88yW 8ZZZZywW,wwWw,   w5889ww5WyyyW5jjjzyWWWjwj,,            \0"},
		{"                                   WyjjZz W    wWzWyw,,ww,5B,    yz wy5Bw,jDjWBDjwWjwjw,,           \0"},
		{"                                   WBWE8z         wj, wwj9ZZZZZZ9D8B WwDy5 yDw5DDwWywyjw,           \0"},
		{"                                 ,wwzDZZ8 ,,,    ,Ww ,w,w,,,  WDzD5E5,,WDDw,zjwz5Wwywj5W,           \0"},
		{"                                 Wywz9WZz ,,,   wWw  ww,,,        WD9BW  y5,jBwDBjwywW5Ww           \0"},
		{"                                 yWw5y,Zz    ,Wyjw, ,ww  ,,,,, ,, ,WDB8D, ,jWWyWByw5WwDj,           \0"},
		{"                                WWwjBjDzE ,wWjW,w   ,,,wj, ,w,,,w,,,yD5D8BW   wwjyW5WjDj            \0"},
		{"                                5w WB598Z  ww  ,y   , W5y5W ,,,,wwwwjBzD5y5BDyw  WjyWWBj            \0"},
		{"                               wy  ,W y8ZD   WjwWz888z5, ,yW,, ,,wwwW5z898BDj5D5W jyjj5j            \0"},
		{"                               y ,  5 ,5ZZ,  WzZjyyw       WWWWWWWwwwjzzZZEZ9EB55W,yjjyW            \0"},
		{"                              ,W w,yBW ,zZZ   ,Dj wWB9EZZZ5wwWWwWWw,,yEZZZZ85BZzD5 wjD5j,           \0"},
		{"                              j,, Byyy, D5ZZ  wy5yyjW,WyD5y5WWWjWw,wyEZZZZzEDjBjzBy jByjw           \0"},
		{"                             Ww wyy,,jj wwBZz  wj5DBBzBj,,,WjjjWwwjBZZZZ8 w5By9,WBDW,BWWw           \0"},
		{"                            ,  WWwjWyj5zjjWZZy   ,wwWWwwwww,,wwwyEZZZZ yB,jzzjEWjyBD Bjjw           \0"},
		{"                              ,WjjWZ5jDBDj B8Z          ,WW5z9ZZZZ98ZZ jzzEDyz9Wjj55jw5WW           \0"},
		{"                            ,yByWjz9jyyzzBj8WEZW  ,Wjy555yyj BB E   8Z55BBDB8zzWy5j5y Djj,          \0"},
		{"                         ,wyj, wjDzjjBjDDD5Dy ZZZZWWw,,         j     B98EBEDjDW55yy5 zyjw          \0"},
		{"                      ,ww    yj5jD5WjZW5yjZyB wZZ     ,w, jww,, 5w ,  wZZE9zwjDyyDWWD,zyjW          \0"},
		{"                   ww    wzE9j5WBDjjD9w5wyZyD  zZ w    ,w D           j, ZZDWWjDW55 5wzjWW          \0"},
		{"               www,  w,wjBzyWwyz9jw5B5WW,8Ej5   B,, ,,    WBzyBB yj       BzDjjz5yD WyzjWW          \0"},
		{"              W,,  wy   DBw, Dzz,WW5yywwyZBjW   W  ,Wj          B,DW        BWWz8WD, 5DjWW          \0"},
		{"            wy,, ,jj   y5z5 j5Dw5jyDDW,j98jy  yD       ww,  5zDyZZ   ,      y,wDZyjW zDjW,          \0"},
		{"           ,5,   yww ,yj99y WDj5DjBDjWw9zjyy jD            EZB55   ,,, W,  BZwjy98Ww BDjW,          \0"},
		{"        wjjj   wWWw wWjDyWW 5Wyzy5zjjw885WjWW8             EZz,   ,,,,w  wZZZ,jWz8y,,D5Ww,          \0"},
		{"        j555y, ,wjjwjWj8Dw, j,yzjDBWy59ywywyy             wD,  ,wWjWWW  8ZZZ9wyjy8D wjD, w          \0"},
		{"     , ,5ww  ,wjWwjjBwjz5y 5y,yD Dw5yB8w yyy              w         ,, ZZZ88ZWyDB5B ,yD, w          \0"},
		{"       ,j      ,DB,jywwyyWw8Dj W BW5D55,Wj5              W             ZE98zZwyy9DB,,D5w ,         ,\0"},
		{"       jW       ,Dywjwjwjw5z5D yj5wy5yWj,y               W            DZz9589,5zzjz,w55j  ,       ,,\0"},
		{"       WW        WyDywwjW D59EW yDwjyjW,Wj                            zZ8zBE5W899yB,jy5y, W         \0"},
		{"      ,,W          WzBw wjywZBwWWy,zjjW,5               W,            ZEzDEzW8ZDDy5,jyy5W w         \0"},
		{"       ,W           wDD5 ,5yEBwwWWjzyw                                Z858zyBZ5WjyjwD5jzy w       ,w\0"},
		{"       j              j5W  5ZZj jwDz5                  ,              ZDD9DBZDwyy5jwB8,Dj,W,    ,w,,\0"},
		{"      ZZ               95jw  wjWj,BBW                  ,             wZ5BzDzyWyy5j BBz ,w,W     W,  \0"},
		{"      EW               BzB5, ,jW5wZB                      ,,         jEBD55jWy55jW5E8, w,W     w,   \0"},
		{"                       yDyjZE85W85D                   j     ,,       jZDjjWWyjWwj9Zj w5jwjw ,  ,    \0"},
		{"                       W8jyD8ZBDD                   DZj              59W5y5yjjyB9B jzy,WjW ,   ,,  ,\0"},
		{"                        8jjDy9W                    WBB            wwDZZBDyyy5BZ9Wj8zW W,       ,, ,,\0"},
		{"                        5wW559                     wZ                  E95BBEZy yBj ,W,     , ,,    \0"},
		{"                        Wjjy8W                     9j              ,    EE899w,5j, jy     ,ww , ,   \0"},
		{"                        5zZEE                      Z          ,          5WjwWywW5Ww       ,w       \0"},
		{"                        Bj                        DZ                     9ZEy5BZZZ                  \0"},
		{"                                                 j8D                      B5yyyjW8z                 \0"}
	},
	[3].data = 
	{
		{",,,,, ,Wwj5Wj,j  ,,,,,,,,,,,,,, ,                  ,,,,,,,,,,,,   ,,,,,,,,,,,                       \0"},
		{",,,,, yW,  ,DW E   ,,,,,,,,,, ,                            ,,,,,                                    \0"},
		{",,,,,   z99B w,WW,,,,,,,,, , ,                      ,,   ,                                          \0"},
		{",,,,,,,           ,,,,,,, ,,, , ,       ,       ,WwWWWWw                                            \0"},
		{",,,,,,,,,   ,,,,,,,,,,,,,,, ,          ,,   ,,wj,      ,W ,,   ,                                    \0"},
		{",,,,,,,,,,,,,,,,,,,,,,,,,,,,, ,            ,wjBzZB      ,wW y   ,w,w,   ,                       ,,  \0"},
		{",,,,,,,,,,,,,,,,,,,,, ,             w, ,,,,, ,y9jwW  , ,,Wy, z, ,,,,,,                              \0"},
		{",,   , ,,, ,                      ,Wwj,       W5D w5 wW  wjy W8, ,W,w,,                             \0"},
		{"                                 wjwW,  ,wyD88B5E8 zjyjj,Wjyy DD, wwww,,                            \0"},
		{"                                 jww,,wj89EEZ85wjz8jjjyWwW5j5,,5j  wW,ww,                           \0"},
		{"                                jW w55EZZ9yWw   ,WDyW,yWWWyj5wwy5j, wWwww,                          \0"},
		{"                               jy ,5BzZ9W  ,, ,,wwj5jw5yWjyj5jwwyWj  WWWW,                          \0"},
		{"                              wD,,wzZZBw,wwWwwwwwwWjjWy5Wjyy5yWjjDjw ,WWwww                         \0"},
		{"                              5j,,jZEBW,wwWWwwwww,,WjjjjWj5yDjjyWyDy, ,WWj,,                        \0"},
		{"                             Wy,,wDZBWwwWwWWwwww,,,wW5WjWjDWBWjWjWyyW, wwWwW,,                      \0"},
		{"                             yw,w,Z8jwwwwwWwwwwwww,,wjywwW5WzW5WjyWyDWwwwWWww,,                     \0"},
		{"                            wW,WjwZj     wwwwwww,     jw,W5w8y5WyjjwD5w,wWWwW,w,                    \0"},
		{"                            j,wDyjZ5B8985WwwwwwW5zE9ZZ8D w5wjj,jjjWWjB5wwwWwww,w                    \0"},
		{"                           ,,w5B,DEj,  jD5wwwwWjjW,   ,D5 ,jjBjW y5wwyDy,wjwWjww                    \0"},
		{"                           ,wyD5,EW Wzy,  w,,www,  ww, ,DB   jDyj y5,wB5wwWWwyjw,                   \0"},
		{"                          ,jyWjz 9 5ZZZZBzWj,,,wjzZZZzZZZZ9w  ,5DW D5 jDy,Wj jjw,                   \0"},
		{"                          yW5,D9wz      wjWjw,,,WWWjw,   y9Zzw   yj,y5 5Dwjy,WDw                    \0"},
		{"                          yW5 z95B    ,  ,wWw,ww,,,        D998y     wW,5WjyWyDW                    \0"},
		{"                         ,jW5wEzEy ,,,,,,,ww,,ww,,,,ww,,,,  WBBB98DW,    jyWwWBW                    \0"},
		{"                        ,,,y5jZDZ5 ,,,,,,,Ww,,ww,,, ,w,,,w,, WBB5jjjyD5j, jjjW5W,                   \0"},
		{"                       ,,yjD5DzyZZ   , ,jjW,  ,, Wyj, ,,,,,ww,WB899Zz55Dyw,WjWDWw                   \0"},
		{"                       w,W5jj55WZZ   ,wyjww     yDWjDj,,,,wwww,WzZEZZZ98z5  j5BWW                   \0"},
		{"                       wwjyWyyW5zzZ  WjW ,jy58Z9W    yyjWWWWWwww5ZZZ9Z5j58D, yBWw,                  \0"},
		{"                       WWyW,y9BBBzZD  ,wWWwWBw   ww   ,WjWWWWwwWyZZ99ZDBwjzB,wBWw,                  \0"},
		{"                       jWy, jwzzBDZZj   jZZ wjDB8yzBZZDWWWjjWwWyDZZy  5EywyBD 5yww                  \0"},
		{"                      ,WW5 ,w D8DB9EZB    58z W y5DW5  jjjWWWj5BEZ8   ,ZZZyyD5 BwW,                 \0"},
		{"                      WjWW wW 5DD5D5EZZ   wyyyDBBj, ,,,wwWWWj5z9Z9  wwW,  yD5D DyWW                 \0"},
		{"   ,,                wy,w Wwyyy555BDz5ZZ   WyDBzy ,WjW,w,wWjDzEZZy w,       j55jzWW                 \0"},
		{"                    ,jw,W,,WBwW5yj555W5ZZ5  ,,      w5,  wyzEEEEZ           ,wyW9Wj,                \0"},
		{"                   ,Wj ww jy5ywDjjz55y ZZZZj,        wyB9EZE98z9   W       WW wj8j,w                \0"},
		{"                   wj  w wWjjyj5jWBz5yWzZZ   ,w    wWw,,BZEB555   Zw ,W,   w,  WBywj                \0"},
		{"                  ,j  , ,Wy5ywEB5y5zzDBD       W,5jw      Wyj5jy8EBW, 5w,,      5ywW                \0"},
		{"                  j    ,jDyyjDEyy5jBzB8        ,w       WZBDyy5,  ,yZ9jW,,,      5WW                \0"},
		{"                ,W  ,,jB5wWyyBzyyB5jD5BZ   ,w       ,Zz, BDWWj, ,wwj5z   ,,,    wDWw                \0"},
		{"               ,W  ,wyy  wWDwz5yjDE,BjWZZ ,wwjWwWWWwBZyWzzyjWy,,,w     ,,,,,  yj,jWw,               \0"},
		{"        ,    , W, wjW  wBBjBy8Djj58,yjjZZW ,,w,            BBBWw    ww,w,w  wBDW,ww,,               \0"},
		{"               wwww ,5zD8y5588yj,DDyWjDEZy                            ,wwjW5B5Dw,W5 w               \0"},
		{"              wW, WwjjBy5 DB85W5Wz8Wyy9E9z               ,                 wjyyw,w5 ,               \0"},
		{"        ,   w,W ,yW  j9B, WzBjDWDBBjW9998E               jW                DjBDw, yj,,              \0"},
		{"       ,,   w  ,Wy  ,D5Bwww9j5zy8z55wZz8zZ               wj                Bj89jw W5w,,             \0"},
		{"       ,,   ,  wyW WywyyyWWzjz5DBD55BZBzzZ               ,j                zDzzjW,,jWw,,            \0"},
		{"           jw,,WWwWyDjB,w WjW5zBD5BBz88Bzz                y                BEBByy,wBwwW,,           \0"},
		{"          jE, wjwWjj5 wyw,jwWw8jzByD8D8BB8                w                8ED5BD, zB , ,,          \0"},
		{"       ,  W, ,WWjyjBj, 55yEWjjj ,5,BBy8Dy8                                 9D55BDw 58W  ,           \0"},
		{"       ,  WjWWj5wjWzyj WByzzB5 jw5,5DWBDDzz    ,    ,                      9z5DDw, 59j  ,           \0"},
		{"          WWww WBzw,WyjjW,5y5ZWw yjyzj5Bw     ,          ,    ,,           9z5D,  j8j  ,         , ,\0"},
		{"       ,  5WWjW Wz85ww jwWD5jZ5WWWWW9z       ,     ,     z       ,,       ,E5jj ,wBw Ww    ,w,,     \0"},
		{"          DWWjj  w5z85W   Wj5EEjWWy,ZW           w,     jE             ,  ZZ5  yz9yWDj, ,w,        w\0"},
		{"          wj55yw    wDB5W  jyzZE,wj,Z           ,      ,y              ,    W99EB,w5y,,,           W\0"},
		{"               w      Wy5y,  ,D5jW5yB                  W                w    BZD, Dj  ,            j\0"},
		{"WD55yWw,                j95y,   5yzW                   5           ,          5j jw            ,, ,w\0"},
		{"    w5z8B5yWw,wWj55yjWW  Wz85yEBZD                     5           ,           zWjj99             Dw\0"},
		{"w,       wyDzzzy,,,       WyWWBz5                    , 85          ,           jyjjDzy,           j \0"}
	},
	[4].data = 
	{
		{",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,, ,                   ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,wwwww,\0"},
		{",,,,,,,,,,,,,,,,,,, ,,,,, ,,,,,,,,,,,,     WBEEZZZZZEE8j    ,,,,,,,,,,,,,,,,,,,,,,,,,w,,,,,,,,wwwww,\0"},
		{",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,     w555yWjyDzzEZZZZZ8    ,,,,,,,, ,,,,,,,,,,,,,,,,,,,,,,,wwwww,\0"},
		{",,,,,,,,,,,,,,,,,,,  ,,,,,,,,,,,,,    WBDDBz9ZZZZZZEEZZZZZZj         , ,,,,,,,,,,,,,,,,,,,,,,,wwwww,\0"},
		{",,,,,,,,,,,,, ,,,,,,,,,,,,,,,,,,    D8zzEZZZZZ9ZZEZZZEEZZZZZZz9Dj      ,,,,,,,,,,,,,,,,,,,,,,,,wwww,\0"},
		{",,,,,,,,,,,,,, ,,,,,,,,,,,,,,,,   W8BB9ZZZZZZZZZEZZZZZZZZZz8ZZZZZZZZD    ,,,,,,,,,,,,,,,,,,,,,wwwww,\0"},
		{",,,,,,,,,,,, , ,,,,,,,,,,,,,,,   55DBEZZZZZZZZZZZZZZZZE85jw9ZZEZE88ZZZz   ,, ,,,,,,,,,,,,,,,,,,wwww,\0"},
		{",,,,,,,,,,,, ,, ,,,,,,,,,,, ,  ,55D8EZZZZZZZ855DB8E5y  jBZZZZZZ999D88ZZE   , ,,,,,,,,,,,,,,,,,,wwww,\0"},
		{", ,,,,,,,,,,, , ,,,,,,,,,,,   wyy5BEZZZZE5w      wywwyD9Z8EZZZZ988zE999ZZ,  ,,,,,,,,,,,,,,,,,,,wwww,\0"},
		{",,,,,,,,,,,,, ,, , ,,,, ,,   wzW5DEZZZ9w   ,wwwWwWjW5998ZZZZZ898EZ99EZEZ99    ,,,,,,,,,,,,,,,,,ww,,w\0"},
		{",,,,,,,,,,,,,,,,,,,,,,,,,,  w8jwDDZZZy  wwwWWWwwWjjjjDBBzE8EZZz9z8Z999EEZzE   ,,,,,,,,,,,,,,,,,,,,ww\0"},
		{",,,,,,,,,,,,,, ,, ,,,,,,   ,zD WD8ZZ  ,wwwwwwwwwwwWW,wjjD88EZZZZEE9E999EZD9E  ,,,,,,,,,,,,,,,,w,,,,w\0"},
		{",,,,,,,,,,,,,,,,, ,,,,    ,yzj jBZZ  wWwwwwWwwwwwwwwww,Wyyz9889EEE98E99EZEDZ5  ,,,,,,,,,,,,,,,,,,,,W\0"},
		{",,,,,,,,,,,,,,, ,,,,,,,,  yDDw y9ZW wwwwwwwwwwwwwwwwwwwwwyB9988E9EE99ZEEEZD8E  ,,,,,,,,,,,,,,,,,,,W \0"},
		{",,,,,,,,,,,,,,,,,,,, ,,  yjDWw DZ9 wwwwwwwwwwwwwwwwwwwww,wD8zE9ZE9ZE99ZZZZDzZD   ,,,,,,,,,,,,,,,,,W \0"},
		{",,,,,,,,,,,,,,,,,,  ,,  Wyj5,, ZZ  ,wwWwwwwwwwwwwwwwwwwww,j9B99ZZEEEZ8ZZZZB88Z   ,,,,,,,,,,,,,,,,,W \0"},
		{",,,,,,,,,,,,,,,,,,,,,,  yw5j WBZz,w   ,wwwwwwwwww,wwwwwww, z8yz8EZEZZE9ZZZ8zzZD  ,,,,,,,,,,,,,,,,,W \0"},
		{",,,,,,,,,,,,,,,,,,,,,, ,ywz, BZEjB9Z95Wwwwwwwwww,wwwwwwwww wEyjz8ZZZZZ8ZZZzzzEE  ,,,,,,,,,,,,,,,,,W \0"},
		{",,,,,,,,,,,,,,,,,,,,,  WyWB  ZZ    ,jDDjWwwwwwwwww,wwwwwwww y8j588ZZZZ9EZZBzB8Zj ,, ,,,,,,,,,,,,,,W \0"},
		{",,,,,,,,,,,,,,,,,,,,,  jWyy wZZ8E5    WjWWwwwww,,,      ,,w, Dy589Z9ZZE9ZZD8BzZ8  ,,,,,,,,,,,,,,,,W \0"},
		{",,,,,,,,,,,,,,,,,,,,   jWB, 5ZZD 8ZZB WWwwwwwwWjD89EE9Bjw, , ,yWBZZEZZZEZzD85zEZ  ,w,,,,,,,,,,,,,,W \0"},
		{",,,,,,,,,,,,,,,,,,,,, ,Wyy  ZZ w,zZZZwjWwwwwwWWW,     WDBzDj,,W,j5ZZZZZZZD8858ZZ,  ,,,,,,,,,,,,,,,W \0"},
		{",,,,,,,,,,,,,,,,,,,,, wWDW ,ZD ,,     wWwwwwwWw,wWW,     ,W5yWwWw,5ZZZZZEDE5zEZZW  ,,w,,,,,,,,,,,,W \0"},
		{",,,,, ,,,,, ,,,,,,,,  jjyw jZ, ,,,,  ,wWw,,wwwwDB ZZZZZz,  ,wwww,w ZZZZZB89B9ZZZB  ,,,,,,,,,,,,,,,W \0"},
		{",,,,,,,,,,,,,,,,,,   ,jyWWw5Z  ,,,,wwWWw,wwwwwwwj 8ZZW ZZBjWwwwww,WEZZZ8z9D8ZZEZ8  ,, ,,,,,,,,w,,,W \0"},
		{",,,,,,,,,,,,,,,,,, , WjjW,jDZ  wwwwwWWww,wwww,,,,    ,,wwjWwwwwww,BEEZEz9zBZZEE9Z  ,, ,,,,,,,,,,,,W \0"},
		{",,,,,,,,,,,,,,,,,,, ,WjjW 85Z  ww,wWjWw,wwwww,,,,,,,,,,,,,,,wwww,WEZZZ8EzzZZZEZzZw ,,,,,,,,,,,,w,,w \0"},
		{",w, ,,,,,,,,,,,,,,,,WWjwW Z5ZW wwwWjWw,wwwwww,,,,,,,,,,,,,www,w,,88EZE8D8ZZZZZZzZy  ,,,,,,,,,,,w,,ww\0"},
		{",,w, ,,,,,,,,,,,,,,WWjWWW,ZBEB WWWWw,,,wwWWww,wwww,,,,,,,,wwww,,8Z9ZZzB8ZZZZZEZBZ8  ,,,,,,,,,,,,, ,w\0"},
		{", ,,, ,,,,,,,,,,,,wWWjw5,WZB99 ,wwDW,,,,,,wWwwwwwwwwwww,wwww,ww9Z8ZZz85Z8ZZZEZZz9Z  ,,,,,,,,,,,,,,,w\0"},
		{",,,,,,,,,, ,,,,,, WWjWj,Dzzw9z, ,,WDyWWyyjjWwwwwwww,wwwwww,wWy9ZjDZDzB9ZEZE9EZE8zEw ,,,,,,,,,,,,,,,w\0"},
		{", , ,,,,,,,,,, ,,wwWWW5,zEj DD8W    w55jWww,,wwwwwwwwwwwwwwjjBz  Z85E59E88z8E9E8zZD   ,,,,,,,,,,,,,w\0"},
		{",w,,,,,,,,,, , ,,WwWw5jD9EEW B5j8zj       ,,,,wwwwwwwwwwwwWwDzw EZ5zZzBByBz89z9EzZ8  ,,,,,,,,,,,,,w,\0"},
		{",,w,,,,,,,,,,,  w,wWj8WDE9ZE 5j wDz9zzyW    ,,,wwwWwWWWww, z9yZZZDjEE9DzE99ZEBz9D89  ,,,,,,,w,,,,,w \0"},
		{", ,,,,,,,,,,,,,,w,W,zBj9z8ZZj 5Ww55555D8EZ9zDjwwwwwwwww   9ZW88ZzDj9ZEzDZZZZEzz859Zy ,,,,,,,,,,w,,w,\0"},
		{"w,,,,,,,,,,,,, W,wwD9jyE9BZZZ ,W,,jyD55yjw  ,,www,ww,   DZZZ5zZZBDyzZZE9BzZ9E8Bz59ZB ,,,,,,,w,,,,,,,\0"},
		{"w,,,,,,,,,,,,,,w ww8zD8DEBZZZZ w,        ,www,wwww,,,WBZZZZZW5ZZz9B5EZZZZEBzDEBzW5Z9  ,,,,,,w, ,,,,,\0"},
		{",w,,,,,,,,,,,,w ,Wy98ZDBZzZEZZz   ,,,,,,,,,,,,,wWWyDz8zZZZZDBWyZEB95DEZZEZZZZEDD  ZE  ,,,,,,,,,,,,,,\0"},
		{",ww,,,,,,,,,, W W5y9ZZD5E8EE9ZZZ,       ,  ,Wj5DDDDDBDzZZZ988 wZZ99EBD9ZZZEzZZZz  E9  ,,,,,,,,,,,,,,\0"},
		{",,w,,,,,,,,,,,w,WyyZZ8B59zzZ8ZZZZZEDjWwWjj55D5555yyW  zZZZ89ZZZZEZE8ZzDB9EZE8yEZ WZB  ,,,,,,,,,,,,,,\0"},
		{",,,,w,,,,,,, ,,WyyyEZzz5BDz8E8ZZZ5z898BD555DD5jw,    DZZZZ99ZZZZZ99999E9Bz8EEZD Zz9W ,,,,,,,,,,,,,,,\0"},
		{"w,,,,,,,,,,,,wwj5w59Zz8Bz5zBZD8ZZw ,j5DDDD5jw   ,   8ZZZZZ99ZZZZZZEz9E999999EZB,ZZD  ,,,,,,,,,,,,,,,\0"},
		{"w,,,w,,,,,,,,wwWw,5B8zEBBD5DZ8yZZj    ,w,,  ,,,,   EZZZZEZZ9ZZZZZZZZz8EEEZZZ9BEEZ9   ,,,,,,,,,,,,,,,\0"},
		{"w,,,,,,, ,,, ,,j,w5DBBB855D5ZEz5ZW  ,,,,,,,,,    yZZZZZZZZZZEEEEZZZZEBDB889EzEEZZ,  ,,,,,,,,,,,,,,,,\0"},
		{",w,,,,,w,,,,  yDwyzjBz5Zy5B88ZB5Zw  ,,,,,,,   wBZZZZZEEZZZEZZZEZZZ9EZZZ8D5Bz899ZD,  ,w,,,,,,,,,,,,,,\0"},
		{",,,,,,,, ,,w, Dy,5 j8DWZBjDEzZD89w  ,,,,,,  wy8ZZZZEzEZZZZZEEZZE9ZZZZZZZZEE8BzWw  W, ,,,,,,,,,,,,,,,\0"},
		{",,,,,,,,,www, jW,DDZDjjZ5D898ZDEBy,,ww,,wj59988ZZZ98ZZZZZZZ8EEZZZ998z99EZZZ9ZZZ9   w  ,,, ,,,,,,,,,,\0"},
		{",,w,,,w,www,, wywBZBB jZy8858Zy98BwWWwjDwDzz8ZZZE9EZZZZZEEEEZZZZZZZZZEE88z55Dz9ZZZyy   ,,,,,,,,,,,,,\0"},
		{",,,,,wwww,,,, ,BBEDZz DZ5z9yEZ5E85 ,jj,Wz9EZZZZE9ZZZZZZZEZEEZZZZZZZEZZZZZZZZZZZZZZZEB         ,,,,,,\0"},
		{",,,,,w,,ww,   j898EZ jBEyB59ZZBE9Bwj  B9ZZZZZZZZZZZZZZZ9EZEZZZZZZ8ZZZZZZEz8zD5w,DZZZZZZZZZBw     , ,\0"},
		{",,,,,,,w,,  ,D9BDEZw B95jZ8Z9ED89By WZZZz9ZEZZZZZZZEZEEEZZZEE8zzDj   WEZZZZZE5W,   yD8ZZZ8ZZZZZw   ,\0"},
		{",,,,,,,,,  W5E8z9Z5 yZ5 55EZE8zz9B BZZZyBZZZZZZZZZZZZ9ZZZZZZZZEz5y8EzBj jZZZZZZE8Eyw,yD58z   yZZZW  \0"},
		{",,,,,,,,  WjE9EBZ8 5Z9 ,5EZ8ZB88yj9ZZDE ZZZZZZZZZZEEZ99ZZZZEZZZZZz5D5yBzz999ZZZZZ9zyWWwjDEZ     5ZZ \0"},
		{",,,wW   WWBZZ8zEZ wEE  y99EEz888 zZZ9zB ZZZZZZZEE9E9ZZ8ZZZZE8EZZZB W88yDyB5y8z,yZZ9yw,,  wZ9      Zj\0"},
		{",,,,W  y5z99DzZE,5y9, 5z999Zzz8Z Z8ZBED ZZEEZEE9zZ89zZ8jZZZ9998ZZZj jwwj5ZZZBBD  8ZzWWyj WZZ,W    D9\0"},
		{",,,,w DWz9BzEEy,5y8W BDz88Z9Dz9Z9ZDZDz9 ZZ8ZZE9Z5ZZZEzZwDZZZZZ95EZ89Wyw  ZZZ yyyy8ZE5WW,WZZ5wjj   9D\0"},
		{",,,  yjwjWBByWj5E8 wDz8zEZz5zBZZZZ5ZzwZ ZZEEZZZZ8DEZEE9y,B9EZZZ9DZZ5,jWWyEZyyDDWj8Z8   5Z9 ,ww,  ZZ \0"},
		{",,, jD,W8ZDwjB58ywBDDz9ZZz88ZZZZZ9wZD,Z ZZZE9ZZZZ8EE9ZZ9wzzEZ89Z8EZDwyDyzE5wywWjyEzjy9Z9j Wjj58ZZW  \0"}
	},
	[5].data = 
	{
		{"                                                                                                    \0"},
		{"                                                                                                    \0"},
		{"                                                                                                    \0"},
		{"                                         jB89EZZZZB8EEE98B5,                                        \0"},
		{"                                      ,Dzz889Z98B55z8zB88BDzzy                                      \0"},
		{"                                     55y5DDzBzBBE9zyD8zBz9z55Bzj                                    \0"},
		{"                                   yDy58EEE98zD589ZZDyzzB89z5j5BB                                   \0"},
		{"                                  Dy59EE9888zDy5BBBzEjy8z888BWyD5D                                  \0"},
		{"                                 8yD8EZZ9D5Dyw  ,jyD88j5Bz898DWBDyD                                 \0"},
		{"                                9jyBEZ8W,,,       WyD8ByDzz898jjzD5D                                \0"},
		{"                               9y5D9Zj  , ,, ,,ww,,W5z85jBBzz8Bw5zz55                               \0"},
		{"                              BzjDDZj,Ww,,,,,,,,,   w5z8jyB5BDz5jy8zBy                              \0"},
		{"                             ,Zj5D8BwwW,,,w, ,      ,jB9DjByBDBByyy88z5                             \0"},
		{"                             Z55DB9jww, ,,,,  ,,,    ,588yByzBy85yyj88zB                            \0"},
		{"                            ,E5D58D,,,   ,,,,,,,      jz8B8WBzy8zDyy5E8zz                           \0"},
		{"                            zBBD8EDjyWw   ,,,,,        jz89y5zBD9zyBy5Zzzz       ,                  \0"},
		{"     ,                      9zBzEEzz8EZZD,,wwwj59ZZZZ9B9E998D58B89DB5W8Z8z8,                        \0"},
		{"                            EzDz8D      Dj,,wWjjW       D9E9zwzz988BDjD8E8z9W                       \0"},
		{"                           y99z89ZZZ5ZZDwD,,,wWw yBDD5W ,B9E9jD8989BBy5D8Ez89y                      \0"},
		{"                           E898E8W8j EZz,DW  ,wj9yBZZ9ZZz8EZ9yyzE888zyDyB99BzED                     \0"},
		{"                     ,    wZZZEZD ,ww,,  yW  w wWjWw  ,   BZ9B5zE888BDDy5Dz8j8Zz                    \0"},
		{"                   ww       jZZZw        j,  W   ,,,,,    WZEzjzE888BBDyBjzBBW9Z9                   \0"},
		{"         ,WDW     w           8Z, ,,    jy  wjw            ZZzyzZz88BzByB 88DD,9ZEw                 \0"},
		{"         w,B     W             Z5ww,    Dw  wjW,  ,, ,,www jZzDEZz88z8B5zy 9zBj zEZ5                \0"},
		{"        Wwy5    ,w             ZEww,    y   ,,,yW,,,,,,www,yZ8BEEB895zBDDz WE8jW,yEZ8       ,   ,,, \0"},
		{"        w 5    wwy             ZZy,ww, jzw  ww5W,ww,,,wwWWw5EzE88B89BBD858w zZzww,WBZZ,     ,,, ,,,,\0"},
		{"w      ,,,5   w ,9            yZZzWwW,  BZZZZ8W   ,,wwwWWWW5z8EB9z89zB59jzz  99z yW5D9ZD    ,,,,,,,,\0"},
		{"wW,    WwW5   ,  zZzWyj, ,Ww EZD8Zj,Wy            ,wWWwWWwjD8ZDz8B89zzDEB58y  9EB jyyyzZ9       ,,,,\0"},
		{"jj,WW  W  w  w,, BZZ ,jj9Z   ZZBjZEw WzB99BBDy, www ,,wwww5EZ8DB8BzzzzB8B5Bz   ZED jjDBD8Z        ,,\0"},
		{" Wy  w,W,,Ww,,,,wzZ5    ZE , BE9j8ZEy,5BzyBB59Z85jWwwWjWjBZZEBD88Bzz8zz885DzW  WE85 Wjy5DzZW   ,,,,,\0"},
		{"   y, ,,,  ,w,,,,  z   zZZ,w  9BjBZZEjj5zzDDB8Bjjyy5D5yy9EEEz8Dz9BBz8zzz9D5zD   yEZ5 Wj5DBBZD     ,,\0"},
		{"    jw ,ww, ww,,,  ,j DZZ    5EzjBEZZ9w w5z8zW,,,   wWBZEBE88zB59DDBz8zz9B5z8    j9EB ,jWDDzZz    ,,\0"},
		{"     j ,,ww  w,,,,  ,yZZ     EZD5EzZZZZW           jzZZzjBZzZj8y9ByDB8BB9z5B8j    5EZz ,j,55D9E     \0"},
		{"     Ww ,,wW,w,,   ,w 5      Z8z5Ew zZZZzj,,,  wyzZZZzjWwEzzZj9Dz95BD8zz8z5Dz8     jEZ9  y,y5BZZw   \0"},
		{"      j  ,,wWW,w,,WWw       WZzBD8B  Z9Bz998z89EZE8DW,wWyZDZ8D8BDEDB58Bzz8BDDEB      8ZZW y,5559ZB  \0"},
		{"      W,,,,,,WjwWww,    ,,  5ZzBBzZ  885DDDD5DzzDyw,,w,,BBBZBBzBBEDBD8B8z8z5DBZ5      jZZ5 ,Wj5y8Z9 \0"},
		{"      ,W  ,,,,ww,,,    ,,  Z99zBBBZD y8zDDBBD55W, ,wWw jz89Zj9zBDEBBD88zz8zDD5DEj       EZZw w5zyDED\0"},
		{"       j,,,,,,,w,    ,    ZZB8zzBzBZ   wWjWW,         ,j9Z8BB8BBB9BBD8EB8z8D5BWB9j       zZZz  j8DDz\0"},
		{"      ,jwW, ,,,ww ,,w,  8ZZ9B8Bzz8WD9ZyW        ,w,wjw 8ZE8DB8BBz988BBEz8B8z5zyWy9D       ,ZZZ5  Bz5\0"},
		{"     ,WW ,,,wwwWW ,w  yZZZZBB9BB9B  WD5Wj ,wwwww,,wW  BZZZD9BzzBzzD9D5989z8858zw5,zEW       yZZZD jD\0"},
		{"       w ,,,w,,,,    BZZZZBzBEBBZB     WWw,w,,, ,Ww  ,EZZZ5ZzBzD9B5Zzy88z8z85zzyjw WZE        5ZZZz5\0"},
		{"  wW  Bw    ,,,,,,  ZZZEZ8BzzEBDZBw     , ww,,,wW,   WZZZ zzD8BzZDzz9yBE8888B5zzy5,  5ZEW       y99z\0"},
		{"  ,  DE ,,, ,,w,,  ZZEEZ95ZD9EzzE5w     ,   w,W,,,,  9ZEZ8Zz5E5895zDZ55B989z8DBzBjWw   jZZz,      ,D\0"},
		{" ,w WZy ,,,  ,w , DZZEZEBEZ5E9Bz9jw       w WW,,,w, WZE9ZB99yZD9zD8B8BzBz8888BBBzDyWw     5ZZEDw    \0"},
		{" ,  Z9, ,,  ,,w,  ZZE9Ez9E9DZ8z8EWw         ww,,w   ZZ9EZDE858BEDBz85zDz58z9zzzz5zjjW  w,    wBZZZED\0"},
		{" , D9W, ,,  ,,ww zZZ9998EEz8E8z8Z 5          W,,   ,Z99EZzE9DBz8DBz88zBz5DzzzBB95BzDj  ,w,,       wj\0"},
		{",w ED, Ww,  ,,wW,ZZ999899EBEE8z8Z 5          W   wwZZE99Ez99y5E85D8B9Dzz8jBD9DD5zDBD5,  ,w,,,       \0"},
		{"   Dy   ,wwwww,, DZ9999EE8899998Z w,         , jy 5ZE99EEDEE5y98DDEB9BzBEDB5B5559zDD5W, ,,,,,,, ,,,,\0"},
		{"ww j,            9Z989999zE9EEZyZj j         w,   EZ98E99B9Ez5985DE899z88E5zD8DyB8zzzy, ,,,,, ,,,,,,\0"},
		{"   ,,             DE999E8899ZZ8wZZ y             yZE9999EzB8EDz9BDE9z889DZBBzE8y,9EB88j ,,,,w ,,,,,,\0"},
		{",w,               ZE8899898EZ5 ,zZ ,         ,   ZZ9899EEz599BB9z58Ez99z899B8zZ5w BBB85,  ,,,,,,,,,,\0"},
		{",,                ZE899z889ZZ   zZZ          ,  WZE99E8EEzj9E8B88D9989999998z8Z5j DEDz9,  w,  ,,,,,,\0"},
		{"   ,,            DZDzzD9zEEZjw  BBZ8            9Z899E8ZEzyz89z99B9E99999z9Ez9ZEBjj9zBE  ,w,,,,,,,,,\0"},
		{"   ,             jZy5yDB99ZZ w  Dj 88,          ZE99899ZZBD5Z88E9z9E9999Zz9E89ZEz5 zzzE  w,,,,,,,,,,\0"},
		{"  ,,             ,Z9EB5B89Zy W  yW  wyW,,,     8E989989Z8W9jEBzE98E99999988988E9EB D8E5 ,,,,,,,,,,,,\0"},
		{"                w ZZ88D58EZ  ,  jj         w   Z989999EZW,EW98BE89E9EE9E9EzZ99E99B B95  ,,,,,,,,,, ,\0"},
		{"               w   Z98zz8EE     w,         ,  8Z98999E9Z 595z85Z8EEE99E9EEBE9898z5 8B  ,,,,,,,,,,  y\0"},
		{"    ,          ,   ZEzzBBzy w,             , wZ9B989E99EWBjzDBBZ9E99989889B9zzBBzwwW,  ,,,,,,,,,,,5w\0"}
	},
	[6].data = 
	{
		{"jjjjjjjjyjjjjjjjjjjjyjjjjjjjjjjjjjjjjjjjWWw,  ,,wWy5DBz8888zz8885 ,Wjjjjjjjjjjyyyjjjjjjjjjjjjjyyyyyj\0"},
		{"jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjW, WjD8ZZZZZZZE8zDy55DBBDD8ZZ, wjjjjjjjjjjjjjjjjjjjjjjjjjjjjyyj\0"},
		{"jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjyw BZZZZE99z8ZZEZZZZZZZZZZEBDD9ZD wjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj\0"},
		{"jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjWW  ZZ8zzzBBBD WDDz8EZZZ9DBEZZZ8z9Z9  Wjjjjjjjjjjjjjjjjjjjyyjjjjjjj\0"},
		{"jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjWW,,DE989998z8z99B5By5yWj55zB5yyy8Ez8ZZW WjjjjjjjjjjjjjjjjjjjjjjWWWjj\0"},
		{"jjjjjjjjjjjjjyjyyyjjjjjjjjjjjjWj jZZZZZzBDDDD5z8E9EzBDB555D5B8B55DZ89ZZz wjjjjjjjjjjjjjjjjjjjjjjjjjj\0"},
		{"jjjjjjjjjjjjjjjjjjjjjjjjjjjWjWw,BZZ5jWjDD5yDzEZZZ9988E8zBBBz98z8z5y8988Z8 ,jjjjjjjWjjjjjjjjjjjjjjjjj\0"},
		{"jjjjjjjjjjjjjjjjjjjjjjjjjjjWw,j9ZBjjD98B59ZZZZZ8DyD88889zBDD8zzB98D5B98zZE ,Wjjjjjjjjjjjjjjjjjjjjjjj\0"},
		{"jjjjjjjjjjjjjWWWWWjjjjjjjWWwW588z5DB9z5BZZ89E9y   ,y8E9ZZzzBBzz9898zBD8BzZ9  Wjjjjjjjjjjjjjjjjjjjjjj\0"},
		{"jjjjjjjjjjjjjWWWjjWjjjjjjWwjyz98BDB99BBZzBBzyw   ,wwjzZZZEE98EEE98998z88DzZZ, WjjjjjjjjjjjjjWWjjjjjj\0"},
		{"jjjjjjjjjjWWWjjjjjjjWjjjWWw5B9EzB8E98zEzDB55w,       WBZZZZEB8EEE98EE989Bz9ZZW WWjjWjjjWjWWjjjjjWWjj\0"},
		{"jWWjjjjjWjWWjjjjjjjjWWjWWwW88Z8Bz989EEz55yww,, ,     ,WDEZZEWW589E989998zzz8ZZW WjjWWWjjjWWjWWWWWjWW\0"},
		{"jWWjjjjjWWWjjjjWjjWjjjjWWw58EE8DEEZ99ZyyDjww,, ,,,,,    WzZZZZZEEEZZE9999zBz8ZZw wWjjjjjjWWjjjjjjjjj\0"},
		{"jjjjjjjjjjjjjjjjjjjjjjWWwW9ZZE88EZZ5BZWwjWWwWWWWwwWWww,  ,DZZZZZEZZEZZEEE9BBzEZZ,wWWjjjjjjjWjWjjjjjj\0"},
		{"jjjjjjjjjjjjjjjjjjjjjjjWWDEEZEE8EEZjWBZjjjWjjjjWjjjw        ,D99z8EE89998EEzDBEZ5,wWWWWjjjWWWWjjjjWW\0"},
		{"jjjjjjjjjjjjjjjjjjyyjjjwwE9ZEEE9EEZz,5EyjWWjWWjWWWWyDzEZZZEzB5jyjj8ZZZZZZ9EEEzzEE,wWWjWWWWjWWjWWWjWW\0"},
		{"WjjjjjjyyyyjjjjjjWWWWWw jzZE8ZEEEEZEDZZZZ9B5WWjyyD8EZZZ9DWw,,wwWw,WZZZ9EE9E9899EZ5,WjWWWWjWWWjWWWWWW\0"},
		{"jjjjjjWWWWWWwwwwwww,,,  yBE8EZEZ8DZZE9DDDEZZ8D555B8B5W    W,   ww  yZZ9EZ9EZ9z8EZD wWWWWWWWjjjWWWWjj\0"},
		{"WWWWWwwww,,,,,,,,,     w 9EEZEZZ5BZzWwDz5yWWDDyyjjy5DDZZZZZZZZZzyw  EZZ8Z98EE8zEZB jjWWWWWWWjjWWWWWj\0"},
		{"WWwww,,,,,, , ,,, ,,,  W 9ZZZEZZyZZ8ZZZ9ZZZZ8zyWwwW5BZZB8D    , ,   DZZ8ZE9E9889Z8 wWjjjWWWWWWWWWWWW\0"},
		{"Wwww,,,,,,,,,,,,,,,,,, , ZZZZEZZzj,yByw Ww,jzDy    WyWWj5BBDw       yZ88ZEE99888ZZ wWWWWWWWWWWWWWWWW\0"},
		{"Wwww,,,,,,,,,,,,,,,, ,   ZEZEEZZ9     jBzBDyjjw     ,WwwW,          5Z889ZE89899ZZ,wWWWWWWWWWWWWWWWW\0"},
		{"wwwww,,,,,,,,,,,,,,,,,  WZEZEEEZZ          ,, ,              ,,,,,  EZ8EEZ9z9z899Zj,wWWWWWWWWWWWWWWW\0"},
		{"Wwwww,,,,,,,,,,,,,,,,w, 5ZEZEEEZZ   ,,       ,,    ,,W,   ,,,, ,,, WZZ9Z9Z88Z8999Z9,wWWWWWWWWWWWWWWW\0"},
		{"WWww,,,        ,,,wwww, EZEZEEEZZw ,,,     wE,        8Ejwwwww,,,w BZZ8ZEE9zZz8E9ZZywwwwWWWWWWWWWWWW\0"},
		{"jWww,,,,   ,,,,,,,,w,,wy9EEZZEEZZZ  ,wWWWj59Z         5ZZz555yjWW,WZZE8ZE99zZ98E9EE8w,WWWWWWWWWWWWWW\0"},
		{"jWw,,,,,,,,wwwwwwwwWwW5D8EZZE9EZZZ  wjyy55BE9jDDB55EZZByBE8BDD5yW BZEEzZZ9EDE9zZ88Z8z, WWWWWWWWWWWWW\0"},
		{"jwwwwwwWjjjyyy55555y5DD5BE899zEZZZZ wy5DDDzBww58E9ZZ5    WBBBBDjwWZZZ99ZE8ZD9EBZ9zE9Z5 wjWWWWWWWWWWW\0"},
		{"yjWWjjjy555555yyyyyy5D5yzZE9B5EZZZZz jDBBDyW    wWw, ,,, j8D5yjWW8ZZE8zZE8ZzzZzE989EEEy,,WjWWWWWWWWW\0"},
		{"5yjWWWjy5555555555555555E9Z9Dz9ZZZZZ  Wyyy59ZZZEZ9EE9ZEZZZZz5yyyBEZEZ8EBZ9EE589z88BE998jWwwWWWWWWWWW\0"},
		{"D555555BBDD5DDDDDDD5DDDBZBZByE8ZZEZZZ, wWj58ZZZZZzZ8DE8ByWwyDDDz9ZZ8EzEZZ8Z9zD8z9Ez8ZEEjWWWjWjWWWWWW\0"},
		{"BDDBBBBzBDBBBDBBBDDDDDD8EzZ5B88EZzZZZZD Wy55w     ,,,  WyWWyDDz98ZE8ZB9ZB9Z8ZDzB8Z9BEEED5jwWWWWWWWWW\0"},
		{"DDDBBzzzBBBBBBDBBBDDBBD89EZj9zE9E98Z9ZZZWWy5jjyz88889EZ8DyjjjDzZEEEzZz9ZZEE8E8BzD8Ez9Ez555WWjWWWWWWW\0"},
		{"DBBzz88z8BBBBBBBDBDDDzz9ZZzy9zZ8EEDZEzZZZzw,wwW5zEZZZ95Ww,,wyz9ZE89zZB9Z8E988988Bzz888D5y5wWWWWWWWWW\0"},
		{"5DBz89ZZZZEzBBz8zD5DDBzZZ9BB9DZ9ZzBEE9EZZZZB             ,wy8ZZZE889Z88ZBZ9888ZzzE9zz8DBWB,jWWWWWWWW\0"},
		{"y5Dz89Z    9z8jy8855DD9ZZzBzEDZEZB8EEZZZ99ZZZB   wWWjWWWjyzEZEEE9zz9Z88ZzZ8zzBE8zzE9E8zDwz,jjWWWWWWW\0"},
		{"y5B8EEZ    D8y   BDBB8ZZzB8B9BEZ9z9E9ZZZ8EZZZZZ8yWWWWjyD8EZE98E9EBz8EB8ZzZEz9BEE8z8E9E9BW5wWWWWWWWWW\0"},
		{"yzzDEZZ, , ,9B ,  EEBEE8889B9DZZzzEBZZE9ZZZZE9EZZZZZEEEE988888E8ZzzZ9B8ZDZZ89B89z8zE88EEj5jwWwWwwWWW\0"},
		{"yW   zZ5 ,  zz ,, 5Z89z898EDBz8ZBBDZZEZEZEEZE988z8888zzBBzzz8zE89zzZE88E5ZEzz9BZ9zzZE899Wy5wjWWjWWWW\0"},
		{"5D    Z8 ,  B8wwW ,ZE89998E85ZDZD8ZZZZZ9EZZEE998888zzzzzz88888E99zzZ9zEZB98z89DZ9DzZZzzZDwDjjyjjjjjj\0"},
		{"59    ZZ ,, DE, w  ZE99E89EZyEDZ5Z9EZZZEZZzZZ998zzz888zz8888889E88BZ8BE9BZzBz9zE859ZZ988zj5yjjjjjyyj\0"},
		{"DZ    9Z ,, yZ ,jw ZZE998E9ZjZzzEZEEZZ9EZZ99ZE998zzzzzzzzzzz888E88BZE8Zz9ZBBz89zBB9EE98zBD5jjjWjjWWW\0"},
		{"BZD    Z  ,  Z, Ww W9ZZEzE8Zy99DZZZZZZZZZEZzEZ988zzzzz8zz888888E88DZ98EB8Z58BEZBB998Z98Zz9Z5Ww,wWwww\0"},
		{"BZE    8  ,  Z       jZZzEzZD9EBZEEEZZEZZz8zW9Z88zzzzBz8zzzz8zz8B85Z89EZZE5E5EZ5DZ8zZE9ED  z995Wwwww\0"},
		{"zEZ  ,  8wjw Z  , Wyw  ZZ989z8Z5EZEZZZ8ZZy5jy zZzDDBBBBzBBBD55BDDByZB9Z8EzD85ZZyDZED8WZEZD    yDzDjw\0"},
		{"ZZZj ww,Z,  ,ZB55wwBDW  8Z8889ZDEZ9EZZyZZy,,wW jyB5y5yyyD55jj55y5ByZzEZ8ZD8BzZEDBEZ8E5 EEZz       W5\0"},
		{" EZZ               jzZ9  ZZz88ZB9ZEZZZ8Z8  ,,, W  wyD55yDDDBDB5D8D5ZzEZ98z8DEEEDz8Z9Z9By99ZW        \0"},
		{"  5Z    ,,,,w, , wwyy,,   Zzz9EzE9EZ9ZZz     w,w      ,,        Wj,ZBZZ888B9Z9EDz9ZE9EZ998ZZW      ,\0"},
		{"         ,wWw,wW5BBBj ,   ZZ8999E5ZEZZZ     w    ,           ,wyw,zZBZZD99zZZEEBE8EEEZEE95ZZZ   w   \0"},
		{"      ,,ww, ,Wjw  WzBWyW,  ZZEzZ8BZDzZ5,   ,       ,       ,Ww wW5ZZzZZ5E9EEZZz8EZEEZE9Z9yEEZWw ,   \0"},
		{",    ,,,            ,       ZEBZzzz99jw   ,     ,          ,   w55ZZzEZzZ8Z9ZZ8E88E9EZ9ZED98ZB,  ,  \0"},
		{"B                     ,,ww  ZZ8Z9zzw  ww  , ,      ,,,,,,,,jwwj wBBEE8E88EE8ZE9Ez888EEEZEBZ8Zz   ,  \0"},
		{"ZW                    ,,w, jZEZEzZZZZ                     ,, ,  yy,5BDEz8ZEzEE9988D89EZE8EZ9Ej ,,w  \0"},
		{"zZw                    ,   ZZZE8ZZzZZZZ                   ,,,  D  DB9BEzEEEzE99988D88EE9EEZEZ  ,,,  \0"},
		{"zZZ                 ,,Ww  ZZEZ9Zy    ZZw                      yw W5BZBZyZZ8z9999998EzE9E9EEEZ W,w   \0"},
		{"9ZZZ  ,          ,wwWWw  ZZEEZDj      Z                      jjwWWyZEBZy9Z98B98E9ZZZD99ZZz8ZZ ,W    \0"},
		{"E8EZzWjw,      ,,,wjjj  ZZZ89E       wZ                   ,  y   5ZZZZZB9Z98zz88zZZ9DB8EE9zZZ  W  ,,\0"},
		{"9EEZ  jWWWjjjjWjWWWWWWjZZEE89Z       y                      WW5ZZZ8Ej5 989Z8zB88BBZzBB8z989ZZw W w  \0"}
	},
	[7].data = 
	{
		{"jWjjywwB98E9999EE9999EE88999EE9zDDDBBD5yjjjjjyy5Dz9ZZZ9889zz8899y wjjjyyyyyyjjy5DyjjjBB5BBD5DDD5y5yy\0"},
		{"yjjWWW5Z99999999999998z99999E8DjjjjjWWWWWWWWWWWWwwW5zEZE9EE8zz8EZ9,,Wy5yj5y5y5555jjjjjwyjDBDDDB5DDDj\0"},
		{"wjyjyW9E999999999999989E8Ezz9B55yyyjWwWWWWWWWWWWWWWwjD89EEEE98889ZZj,y5D55y5yj55yjjWyyw5jyB5D55DBzBy\0"},
		{"5zD5DBZ999999E999999999989BzzDDyyjjWWWWWWWWWWWWWWWWwwWD8EZEEZEE999ZZj,Wyyy5Dy5y5DyjjBZ5jyyjWy5y5555y\0"},
		{"jjjWWjE999999999EE988898888zBD5yjjjjWWWwWWWWWWWWwWWWWw,,5z9E9EEEE9EZZyy5yjWWyyy5ByWWwwwwWy5BD5jDDDD5\0"},
		{"yyyyjDE999999999999888988898D55WWWWWwwwwwwwwwWWWWWWWW,  ,BEZZEEEE999ZZzz8898z88ByjyD8BDDD88ZzDwjj5BD\0"},
		{"jjjyWzE98E99999999988888z99B5yyjjWwwwwwwwwwwwWWWWWw,,jzZZZ98ZZEEZEEEEZD  ,wwwwwwWjWWWjyyyyWjy5BBDBD5\0"},
		{"555Bj8E99E899999998888888EED5yyjjWwwwwwwwwwwwWWWWWwj8ZZzw    8E8ZZE9EZZz,jyyyyyyyyyjyjjjjjjWWWWWWWwW\0"},
		{"555yWzE9E9899E999998889z8E955yjjjWwwwwwwwwwwwwwwwWjzEB,  jz9B5z8DZZE99ZZy,jjjjyyyyyyjjjjjjyyyyyjjjjj\0"},
		{"j55jjEE9E989999E999889989E855yjjWwwwwwwwwww,wwwWWWW5j  w99EZZZz58EZZ99EZEWj555y,wwwj5yyyyyyjjWWjjjyy\0"},
		{",WWW,999E9899E9E88889899998D5yjWWWwW,   ,wWWWWWWWWjyW BZZj wBBW  W8ZE99ZZBy5DzDWjjjWW5D55WWWWWWWjWjj\0"},
		{"jyyjWE99E88899898988999989zDyjjWw,  ,yB88D5yjwWWWWWjywZZZZwDyyWww, 9ZE9EZzyBB5wwWjjWWjyyjjjjWWjjWWWj\0"},
		{"j5yjWE9EE89899898898E99E888Dyjw  ,yZZZZ8BDjWjWWWWWwy5,885jjjjWwWWW,WZZE9ZEW ,wwjjjjy5D5jwWjwWWWWWWWj\0"},
		{"jyyWjZ99E88z89z9889999E9989BjWwD9EZ8j,,   wWWWWwwwwWyW, wWjWWwwWWWw DZE9ZZDwjjjWyjWWWWWjWWjWjWWjjjWW\0"},
		{"jWj,WE99E9888E88999999E9998zyzZZ8y,     ,wwwWWWWwwwWjjWwwwwwwwwwWWw,wZZ9EZB WjjWWwwwwwWy5yyjjWWjWWjj\0"},
		{"Wjy,WZ99E88z8E8z888999EEEE8z8Z5,     5ZZz8Z8WwwWWwwwwjjjWwwwwwwwwWWW,EZ9EZ8WwWjjyyDDy55yjyjWWWjy555y\0"},
		{"Www,yZ9E988zzE9z8E9E999EEE99DW,ww ,ZZZBEZ w8BjwWWWwwwWWjjWWwwwwwwwWw,DZ9EZE5WyjjWwWW,,,  ,,,,,,,,wy5\0"},
		{"BBzD8Z98988zzE988E9E999E9E9z55yjw5ZZWZZZZyBjw,,wWWWwwwwWjyW,,wwwwWwW,WZE9EEEyy5DBBDDDD5DDBBDDDDDDDyj\0"},
		{"yyyWzE98999889E9899E999EEE9D5y559ZZBWWw ,WWWw,,wWWWWWwwwWjyyWWWWWWWWw,ZZ9E9E5wjjjjjjjjjWWWWWjjyjWjjj\0"},
		{"yyjW9E989988988899999999EE9DyjWyyw,wWWWWWwwwwwwwWWWWWwwwwwjyyjWWWWWWW ZZ88EE8wWjjjjjjjWWjjyyjjWjjjWW\0"},
		{"jjWjE99888889998999999E99Z9DyWw,,,,,,,,,,,w,ww,wwWWWWww,,,wWyjWWwWWWw zZ99E9ZDy55jjjjj55jW5wwyyyj5B5\0"},
		{"55DDE888898899989E9999999EZzyWWWWWwWwwwwwwwwwww,wjjWWWw,   j5jWwwwWWw BZ89zEZ9DDz5Wjjjyy,,  yDyD5yjj\0"},
		{"BzDzE888889889Ez9E99999E99ZZDwwWWWwWwwwwwww,,wwwWDDW,,wjyj5DyjWWwWWWW BZz989Z9BDB5WjjW5B5DDD55yyyjjj\0"},
		{"DDyz8z88888899E89E999999E98ZEj,WWWwwwWWwwwwwwwwWWWyBzz9E9zyWWw ,5zyWw 9ZB89zEZD5BBWjyWyz55yyyyWWWWWW\0"},
		{"5yj898888889999999999999EEE9ZEyWWWwWwWWwWWwwwWWWWw,,,,       ,5E9jwWw ZEB8EB9Z5DB8WjjW58WWjjjyjjWjjj\0"},
		{"yjW89z988888899989999EEE89EZZZZBjWWWWWwwWWWWwWWWWwwwwww,   ,5ZZEBWWW,WZEB89z8ZDDz8WjjjyBWjjyyyy5555y\0"},
		{"D5j89B99988999998E99999988z88EZEzDjWjjWWWWWWWWWWwww,    j8ZZ9DyBDWWW BZzBz98EZBz8zWjjjW85yy5yyjyjjjj\0"},
		{"55Dz8B99988888898999999998Bjy8EE8zz5jjjjjjjjjWWWWwWy58ZZZz5yyDBDjWWw ZZ88ZZZZD5DyWjjjjwyBBBB55DzzzzD\0"},
		{"5Dzz889989888988899E9999EEZZZZEZZEBBDjWjjjWWWWWWWWyBBBBBzz8zzDjwwWw wZZZZEDWwwWWWjyjyjjWWwwwWWWwwWwW\0"},
		{"yzz888z99998899889999999999EE99EZZZ9z5jWWWWWWwwwwwW, ,,wWWWww,  ,ww BZZBjjyyjyyyyyyyyjjjjjjjWWjWWWWW\0"},
		{"WyyWB9z898998998899989999999EE999EEZZZ85jwwWWWwWWWWWWWWWww,   ,w,w,jZZZDjjyjjjjWWWwwWWWWwwwWjjjjjy5j\0"},
		{"yzzDE98z899988998899999E99988E99999EEZZZZ8DyjjjyyWwwWwwWww,wwwww,Wy9ZZZ8jyDDDy5yBDDDDDBBzBBzDDDBBBzD\0"},
		{"yB5DE8988889E8998z8E99899E9988EEEE99EEE8BZZZZEzD5yjWww,,wwwwwwWy5BDwyZZZ5DDDBBzBBBBzBBBDBBDDBDBD555D\0"},
		{"DDy8E99E9888999898z9E98889EE988EE9E999EZDwjDzEZZZZZZZE98BBBDDBD5y55j,w58zz88zzzBDDDDDDDDBDDDD55DDyDD\0"},
		{"DDBE99EE98989998898z99E98899999899E999EZZD  , ,,wWjjyyyyyyyyjjWWWy5yjwwWyyy5DDz8988zzBBzBzBBDDDDBDB5\0"},
		{"Dy8EE999999989EE88988899998989E999EEE9E9ZZ8  ,www,wwwwWWWjjWWWWWjyyyyjWwwWjyyWw,wwwW5BD55yyyy5555555\0"},
		{"Dj899E999EE9z889999988999998888899989EEEEZZZB    ,wwwwwWwwWWWWWWWyyjyyjWWWwWjjyjjyBzBjwwwwwWWjjjjjyy\0"},
		{"DBE9E98999E988888E9999999999999889998899EEEZZZ95WWjjjjWWWWWWWWWWWjjWWjyyyjjjjyDBzByWwwWWWWjjyyjjjjjj\0"},
		{"5zZ9E9899EE9998889999998899999E988898889999EZZZZ8yWwwwWWWWWWWWWwWWjjyy55DDBBBD5jwwwwWWWWWWjWWWWWWWWW\0"},
		{"yBE9E999E998888888E989EE99z8888999999999999999ZZZ9BBz5W,wwwwwwwWwWWWWjjjjjjWWwwwwwWWWWWWWWWWWWwwWWWW\0"},
		{"y8ZEE9E998889899989E8889E999888898998898899EE989EZZ5  D98DyyyjjjWWWWWWWWWwwwwwwwwwWjjjWWWWWWwwwWwWWW\0"},
		{"WBzZZE999998zz99E99EE989E9EEE9998889E989989999EE99ZZZ    55yjj555555yyjjjWWwWWWWWWWWjjjjjWWWWWwwwwwW\0"},
		{"yBDZZE98999E9z99E99EB898E9999989999899998998899E999EZZE     ,       ,,wWWjyyyyyyyyyjjjjjjWWWWWWwWWWW\0"},
		{"yj58ZZE989EE9z9999999999EE99EE99989E899998899989899EEZZZ5   ,w,W,              ,wWjy555yyyjjWWWWWWWw\0"},
		{"DByBzZZE9999E9989999E9989E99EE999989E9899E9889989E999EZZZZ8W   ,wWww,   ,,,,,,         ,Wjy5yyjjWWWW\0"},
		{"j5D555zZZEE8999999E9999999999999E9989E99999989999999999EEZZzBW    ,wwWw,,     ,,,, ,,        wWyyyjW\0"},
		{"yBD5BDD8889EZZZZE9EE9999999999999E9999E99E9E899999E999999EZEzBjw,  ,,,,wWWwww,  ,,,,,,,,,,,      ,Wj\0"},
		{"WwyyyyD99ZZZZB59E9999E9999E99EE999999E9989E9999E9999EEEE999ZZZz jjw,,,,  ,wWwwwww,,,,,,,,,,,,,,,,, ,\0"},
		{"ByDBB8EZZDw5E8BzEZZZZZZZE9999E9999E99E999E9999E999999E9E9E99EZZww ,WWwww,   ,wWw,,,,,,,,,,,,,,,,,,,,\0"},
		{"DDDBz99w     jZZZZEBEZZEE9E9EE99999999999999999999EE999EE9E999ZE,  ,,  ,,w,,   www,, ,,,w,,www,,,,,,\0"},
		{"DD5B8y    BZZZZD      WD89999999999999E9E99E99E999E9EE9999EE999ZZy  ,,yW, ,      ,ww,,,,,,,,,,,ww,ww\0"},
		{"5DzD   BZZZZzjWwwjW,   EZZZ9E99EE99999E999999999999999999999EEEEZZ5  jyjyyjjjWw, , ,ww,  ,,,,,,,,,w,\0"},
		{"5j   ZZZZj         w9ZZZZBZZEE99999EEE999E99999E9999E99E9999999EEZZZ      ,wWjWww,,www, ,,,,wwwww,,,\0"},
		{"D wZZZ8          W9ZZ8y   WZZ99E99999E9999EEE999E9EE9999E9999EE9EEZZZD         ,wWww,,wwww,,, ,,,wWw\0"},
		{"wEZZD    Wy5558ZZE85j    ,W8ZZ99E99E9999E9999999E999E9EE999999E9E9EEZZZW   ,,,,,wwwWWWWwwWWWWWWWwww,\0"},
		{"ZZj  ,jjjW wWjw       WjW   ZZZEEEEE99E9999E9E9E999999999999E99E99EE99ZZ9    ,,,,,,wwwwWw,,,,,,,,,,,\0"},
		{"E  WWw,,,WyDyWWWjjjjWw   jy  wZZZ9E99E99EE989999EEEEEE999999E9E99999999EZZz    ,,,    ,,,w,,,,,,ww,,\0"},
		{"w w,wWwWjW       ,,,,wwWw,wy,  W899999E99999998888999E999E999999999999999ZZZZ5Www,,,,,,,wwwwwww,,,,,\0"}
	},
	[8].data = 
	{
		{"jjjjjjyjWjjjjjjjjjWWWjWWWWWWww,            ,wwwWjWWyWWWjjWjWWWWWWWWWWWjyWWWWWWWWWWWWWWWWWWWWWWWWWWWW\0"},
		{"jjjjjWWyjWjjjjjjjWjjjjjWWw,   WzEZZZZZZZZ9DW,, wjWWWywWWWWWWWjjWWWWWjWWyjwWWWWWWjWWWWWWWWWWjjWWWjWjW\0"},
		{"jjjjjjjj5WWjjjjjjjjWWWwww,jzZZZE998z9999EEZZZ85,,wWWyjWWWWjjWWWWWWjWWWWWyWWWWWjWWWWWWWWWWWWWWjWWWWjW\0"},
		{"jjjjjjjjj5WWjjjjjjjWjWWW5BEE9z88z888zzEz99z89EZEyw,wWyWjjjWWWWWjjWWWWWWWjyWWWWWWWWWWWjWjWjWWWWWWWWWW\0"},
		{"jjjjjjjjWyyWjjjjjjjjWwy8E9989EZZZZ98Ezz8z99889ZZZEW ,WjwwWWWjjjWWWWjWWWWWyjWWWWWWjWjWWWWWWWWWWWWWWWW\0"},
		{"jjjjjjjjjjyyWjjjjjWWjB99888888889EZZZE888ZEEZZZZZZZy5yywwwwWWWWWjjjjWWjjWjyWWWjWWWWWWWWWjWWWWWjWWWWW\0"},
		{"jjjjjjjjjjj5jWjjjWj5DE88z8EZZZZZZZZEZZEEZ9ZZEBBzzz89ZZZZZEDW,wwWWWWWjjWWWWyjWWWWWjjjWWWWWWWWWWWWWWWW\0"},
		{"jjjjjjjjjjjj5jWjWyjDEz89ZZZZEEE8zDD55Dz8z85yyz89z898898899EZ85,wwWWjWWWjWWWyWWWjjjWWWWWWjWWWWWWWWWWW\0"},
		{"jjjjjjjjjjjjy5WWjWyE89EZZE998B5yjWjjjjyWwwwwj5zEZE8zzz888999EZEj,wWWWjjjWWWjyWWjWjjWWWjWWWWjWWWWWWWW\0"},
		{"jjjjjjjjjjjjjyyWWw999EZE9E9DyjWWWw,,w,wwWWWWjyyDB9ZZ9zB888z9999Z8,wWWjjjjWjWyjWjWWjWWWWWWWWWWWWWWWWW\0"},
		{"jjjjjjjjjjjjjjyy,899EZZE8Djwwwwww,wwwwwwwwwwWWj55B8EZZzBB88z8998ZE wWWWWjjjWjyWWjjjWWWjWWWWWWWWWjjWW\0"},
		{"jjjjjyjjyjyyyjWjWZ9ZEZZBWWww,wwwwwwwwwwWwwwwwwWjyDz8EEZ9Bz99z89E8ZZ ,WjjWjWWWyjWWjWWWjjWWWWWWWjjWWWW\0"},
		{"jjjjyjyyjjjjjjW,8Z9EZZDWWWwwwwwwwwwwwwwwwwwwwwwWy5DB899E9z899B8E98ZZ,,WjjjjWWWyWWWWWWWWWWWjjjjWWWWWW\0"},
		{"yyyyyyjyyjyyyjwjZ9ZEZywWWwwWwwWwwwwwwwwwwwwwwwwwWy5DB889E8z898zzE8zZ9 wWWjWWWWjyWWWWWWWWjjjWWWWWWWWj\0"},
		{"yyjjjyjyyyyjyW zE8ZZBwwwwwwWwwwwwwwwwwwwwwwwwwwwwWj5DB9899z899889988Z5 WjjjjWWWyjWWjjjWWWWWWWWWWWWWW\0"},
		{"yyyyyyyyjyjyywjE9EZ8      ,w,wwwwwwwwwwwwwwwwwwwwWwWyDzE8E98998899989ZW WjjjjjWjyWWjjWWWWWWWWWWjjjjj\0"},
		{"jyyyyyyyyyyyj,BEEZZz8ZE88ByWwwwwwwwwwwww,,,wwwwwwwWWj5D9z99889988E99zZZ wWjWjjWWyjWWjWWWWWWWWjjWjWjj\0"},
		{"yjyyyyyyyjyyj,989Z8Wjj5z898DjWwwwwww,,        ,,wwwWjyD898E98998zE8988ZD wjjjjjWjyWWjjWWWWjjWWWWjWjj\0"},
		{"5jjyyyyyyyyyWjZ99ZW       wjjWwwwwwwW5B9EE9zDyw, ,wWWjD9E9E9z8988889889Zj,WWjjjWWjyWWWWWWWWWWjjjjjjj\0"},
		{"yDjjyyyyyyyy,DZ8EZjyB8DW  ,WWWWwwwwwjyj555D88EEE85wwWWjzE99E8888889z9z8EZ ,WjjjjjWyjWjjjjjjjjjjjjjjW\0"},
		{"yyDjjyyyyyyj,9Z8ZZZZZwzZZB jjWwwwwwww,         ,jBz5jWWyEE999888889899z9Z8 wjjjWjWjyWWjWjWjjjjWWw,wj\0"},
		{"yy5DjyyyyyyWwZ9EE8DDBw9ZEZyjjjwwwwwwwwjzz8Dyw     ,wWWWW89E9E8z898898Zz88Z5,wjjjjWWyjWWjjjjWw,wWWw  \0"},
		{"yyy5Djjyyyy,5Z9ZZWWwwWWW WWyyWwwwWWwW99 5ZZZ8ZBWwwwwWWWW8999E88888z988Ez89Ey WjjWjWjyWWWwwwWjj,  DZZ\0"},
		{"yyyy5Djjyyj,ZZ9Zz,wWwWwww,W5W,wwWWWWjDDD8Z9ZwEZ9zDjWWwwW8899E98899z98989z9E9W,jjjjWWyjwWjjw  j9ZZZ9W\0"},
		{"yyyyy5DjyyWjZ9ZZy wwwWwwwWyW,,wWWwww,www,  ,,wWjjWWwww,5B8E9E99z898z8989zzEEz,wjjjjjWjW  j8ZZZzW   ,\0"},
		{"yyyyyy5Djj,zZZ9Z,,WWwwwwWjj,,wwwwwww,,wwww,,,,,wwwwWWWw5Dz99EE9z8999z8Ez9zzZE5wWW,   WBZZZ8y   ,jyyy\0"},
		{"yyyyyyy5DW ZZEEZ wWWWwwwjyW,wwwWWwwwwwwwwwwwwwwwwwwwWWWyDz9E9998z999zz8Zz8z8Zz,  w9ZZZ9y,  wjyyyjjjj\0"},
		{"yyyyyyyy5y,ZE8Z9 wwwwwwWyWw,wwWWWWwwwWWWWwwwwWWWWWwWWWWjBz898898z8E99BzZ8z9z8E8ZZZZB, ,wWyyyjjjjjjjj\0"},
		{"yyyyyyyyyWDZ98EE wwwwwwWWW,,wwwwWjWwwwWWWWWWWWWwwWWWWWW5B89z88988z98ZBzzZ8zZz9Ej   ,Wjj5Dy55yyjjjjjj\0"},
		{"yyyyyyyyywBZ989Z,,www,wjyjw,,,, ,WjWwwwwwwwWWWWwwWwWWjjBz8Bzz8Z9888zE8z9zZz8ZzE wWjy55yjw,,,wyyjjjjj\0"},
		{"yyy5yyyyyWDZ998ZW,,wwwwWjDyjjDByy5WWwwwwwwwwwwwwwWWWjy5B898z8BE9zz889ED8zEED9ZEBWyyjW, ,,wwwwwj5yjjj\0"},
		{"yyyyyy55yWyZ9B8Z5,wWwww,wWjjjWwjWwwwwwwwwwwwwwwwWWWjyy585yDjjyzEzzz99ZzDEzZ8BEZZ5w, ,wwWwWwwww,wy5yj\0"},
		{"yy5yyyyyyjwZZB9ZZ,wWWw,www,Ww,,,wwwwwww,wwwwwwwwWWjjjjyW  ww5Z988zz88zE8EBZEz8EZE  WWWwwwwwwwww,,W5y\0"},
		{"yyy555yyyj,ZE89ZZW,wjDEEzBB55jW    ,,wwwwwwwwwwwWWjjjjyZZ558ZZ9zZz899z89EzEE8999Z9,,wwWWwwWWwwww, ,y\0"},
		{"55yyyyyyyjWZZ999Z9 ,Wjz9zz89999E85WWwwwwwwwwwwwWWWWjyjEZZZZZZZ89Z889z89EE89E9989EzE,,wWWWWwwWwwww,,,\0"},
		{"yyyy5yy5yywzZZ9ZZZD,wWjDBBzB55Dz89zyjWwwwwwwwwwwWjj55DZZEE9EZ898Zz98zzEEE8zEE989ZD89w,WWjjjjWWwwwwww\0"},
		{"yy5yyy5yyyWyZZ9EZZZ5 ,jwWj55D5yjw,,wWWwwwwwwwwwWj5B5WZZZ89E8E8EEE9E99zEZ98zE8ZzEE9B9B,WWjWwwwwWWwwww\0"},
		{"yyyyyyyyyyjWB9Z9EZZZD www,,,wwwwWWjWWWWWWWwWwWjyDB5W5ZZZ89ZEZE998998E8EZZ8zEzZ899888E5W,wwwWWwwWWwwW\0"},
		{"yy55yy55y5yjjBZE9ZZZZj ,w,www,,,,,wwwwwwwWWWj5BB5yjWZZEE9EZZE9E999E8ZB9ZZzzZz989989EBDywwwWwWWWWWWWw\0"},
		{"yy55yyyyyyyjjWZ9EEEZZZW   ,,w,,,,,,,wwWWjy5DD55jjjWyZE9EEZZ9ZEEE98ZZE99EZ8zE89z98889z585WWWWWWjWWWWW\0"},
		{"yyy5yyy5yyyyyW89EE9EZZZZw       ,,wWjy5555yyyjWWWjWB9ZZ8EEZEZ888EZEZ8EEZZ9z8999888989zDBWjWWWjjjjWWW\0"},
		{"y5yyyyyyy5yyjwBZ8888EEZZZZZZDD55555D5yyjjjWWWWWWWWjz58ZE9ZE9899E9EZE9EZ9Z88Ezz9E988988DzyWwWjjyjjWWW\0"},
		{"yyyy5yyyyjjyyy8Zz8z89E99EEZZD55yyyyyjjjWWWWWwWwWWWy9DyzZZZEEEZ99EEEE9EZ9EE8ZE9BD89E99988By, ,wWWjWWW\0"},
		{"yy55yyjjy55jwwzE8E888E9EE9ZZzjyjWWWWWWWWWWWWWWWWWjz8DyyDzEZZZZ99ZEEE89ZEEE8ZZZZZ8BB89EZZZZ9Dyw    ,w\0"},
		{"yyjjy55yWwy8ZZZ989Ezz899EE8ZEwjjjWwWWWWWWWWWWWWWW5zD555y555yyZE9ZEZE9EZZ9E9ZZZEZZZZZE88889EZZZZZ9Djw\0"},
		{"y55yWwWBZZZ85 z8E8E9B889EZ9EZywWyjWWwwWWWWwWWWwWjBByyyyyyyyyWEZ8EEZEEZZZ9Z99EZEE9999EEEE99Z8 DZZZZZz\0"},
		{"jwWD9ZZZBW,wjWE8Z98Z8Bz99EZEZEW,jyjWWWWwWWWWWWwWjB5yyjjyyjjyWBZEZZZZEE9ZEZZ9E999EEEZZ988EZZZ   ,zZZE\0"},
		{"BEZZzyw,Wy555W9z9Z89Zzz8988ZZZ8WwWjWWwWwWwWWWwwWy5yjjjjyy5y5yyZZEZEEEE8EZZEEZZEZEE988z9ZZ9EE ,W, y85\0"},
		{"B5    wy5yyyj 888ZZ98Zzz9989ZZZzjwwWWWWWWwWWWwwj5jjy5DDBBBBBBjZZEE99EE98ZE99EZZEE9E88ZZE88ZZz    ,j8\0"},
		{"EZZZZZD  ww  B8898EZ8EZz88989EZZzyWWwwwWWwwWWWWWWjjyjyjjjjjjj 8ZEEEEEEEEZE9EE9EZE88EZZ98999EZZZEj  9\0"},
		{"EEEEEZZZZ jZZZzBEZ9E899E8z9898EEE9BjjjWWWWWWWwwwwwwwwWWjjjWWW yZE9EZ9EZZZE99EEZ988ZZE8899EZZZZZZZ  8\0"},
		{"98E8889EZZZZZZZD89EE89EZ99z88E9EZEDzy,wwwwWWWWWWWwwWWWwwwwwWw  ZZ9EE9EEEZE89ZZE89ZZ9889EEE99999Zy ,D\0"},
		{"EEE9EEE99999EZZ9Dz9Z999EEZ88zzzEEZEw5zjwwwWWwWwwWwwWwwwwwwwww, ZZ9EE99E9EE99ZE98ZZ989EEE99888EEZZj j\0"},
		{"99E9999999899EZZED8EEZ998E9ZEzBD9ZZZW zBww,wwwwwwwwwwwwwwwWww, ZZEE99EE99E99ZE8EZ8999E988ZZZ99ZEZZw,\0"},
		{"E999Z9988899999ZE8BD89E999zzEZ9BBEZZZj 5zWwWwwwwwWwwwwwwwwwwww zZ99E9999EZE8EE9E899E988ZZE9ZZEE99Z9W\0"},
		{"999EEEEEZ999999ZE9Z9zzzz98Z899Ej5zZEZZj W8Ww,wwwwwwwwwwwwwwwww jZ999E9998Z989EZEEE9ZZZZZEZEE9EZZEZZz\0"},
		{"EE99999E99988899E98ZZZzz8z99898Zy,zZZZZw,w8j,,wwwwwwwwwwwwwww,  ZE99E9EE8ZE89Z999EEE98899EZE988999Z \0"},
		{"999EE999E9E999889Z8E9E9E98998E99ZD,j9EZZyWwzWWwwwwwwwwwwwwwwww, ZE99999Z9EZ99ZEEZZ999EE9E988999EZEZj\0"}
	},
	[9].data = 
	{
		{"      ,,,wwwyD55yjyyyyyyyyyyyyyyWWjjjjjjjWWw,,,,ww,,,wWwWWw,     ,wwWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\0"},
		{"BzBBBBDDDD5yjzzBByyyyyyyyyyyyyy5wWWjjWjjWwWWDz99998zBDjwWjy55DDDj,   ,wWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\0"},
		{"yyyyyyyyyyyyWDBDDyyyyyyyyyyyyyy55DjwWWWww5z998zBBBBzz8zBBBBzz88z8EEzy   wWWWWWWWWWWWWWWWWWWWWWWWWWWW\0"},
		{"yyyyyyyyyyyyj5BDD5j5yyyyyy5y5555Dy W5zyjB8zB5DDz8889EZZZZZZZzBDDBz889EDw ,wWWWWWWWWWWWWjWWWWWWWWWWWW\0"},
		{"5jyyyyyyyyyyjWBDDDy55DD5555555555 jDBjyDB5jyDBBBzzBzz89ZEDzzD5DDDBBzzz8EB, wWjWWWWWWWWWWWWWWWWWWWWWW\0"},
		{"DD5yyyyyyyyyyWDBDD5jyyyyyyjjjjyy,,5Dj5BDjWDDB898989EZE8BB88Byyyy5DBBzzBBEEW wWWWWWWWWWWWWjWWWWWWWWWW\0"},
		{"yy5555555555DyyBDDBDjjjjjjyjjyy ,jBDzzDWWBz8zz8B8EZZ9z8zzzzz8z5jy5DBBBzzB9E5,WjjWjWWWWWWWWWWWWWWWWWW\0"},
		{"yyyyy55555yyyjWzBDDDWjjjjjjyyy wjBBz8By5D8zBBzBzEZEzBz88z5D5y5zB555BzBBBzB9EWwjjjjWWWWWWWjWWWWWWWWWW\0"},
		{"yjjjjjjjjjjjjjWBBDBByWjyjyyyy,wyzB89z55DBDDz8EE99BDDz888DjWjy5yB9zBBzzBBBzz9zWWjjjjjWWWWWWWWWWWWWWWW\0"},
		{"yyyyyyjjjjyyyjWyBBDBDWjjjjjy,wW5B8zzy5yj58ZZ98998988DB889Ez5y5Dzz9BzzzzzzzzzZz,jjjjjWWWWWWWWWWWWWWWW\0"},
		{"yyyjjyyyjyyyjjjWDzBBBjwWWjjwwWy9889BDjw8E8zzZZZZEZZ9B5BDy5z8zzDzz9Ezzzzzzzzz9Z,WjjjjjjjWWWWWWWWWWWWW\0"},
		{"jjyyyyyyyy5yyyyjWzzz8D wWjwwWj8z99D5y5ZE8DZZ998zzz9E9zDyDBB8888BBz998zzzzBBz8ZjwjjjjjWWWWWWWWWWWWWWW\0"},
		{"jjyjyyyyyjwww,   yB5DDyyyW,WjB888855DZZ98E8BBDD555BBBz88zBz98zzzBB898zz88zBB8Z8,WjjWWWWWWWWWWWWWWWWW\0"},
		{"jjjjyyyyjWWWjzBDww5DDD555yWj59zzE5DDZZ989zBDD555y555DDBBzz88999zzzz999zz8zzB8ZZWwjjWWWWWWWWWWWWWWWWW\0"},
		{"jjjjjW,,jwwwWDzzz5BBDDy5D555B8z8z5DzE998zBDD555yyyyy5555DBBz9999zzBz988zz9zDzEZD,WjWjWWjWWWWWWWWWWWW\0"},
		{"jjjjjWwW5WWWyBZZzBzDB5DDDDD588B9DBDEE88zDDDD55y5yyyyyy555DDBz89E8zzB8998zz9BBEZ9wwjjjWWWWWWWWWWWWWWW\0"},
		{"jWWWWjWjDjwwyywwD8zBDDDDDDDDE8z9DzzZ9zzBDD555yyyyyyyyyy55DDDBB8EE8zzB8998z8zDEZZjwWjWWWWWWWWWWWWWWWW\0"},
		{"WWWWwDyjyDyDj jj5yDBBBBBDD5zEz9zBz9Z8BBDD555yyyyyyyyyyyy5DDDDBB8EE8zzz98Ezz8BEZZDwWjjWWWWWWWWWWWWWWW\0"},
		{"WWWWwyyww99z5z9zzByyDDDyyyy99z9BB8Z9zBDD5555yyyyyyyyyyyy555DDDDz89988B888Ez8B8ZZzWwWWWWWWWWWWWWWWWWW\0"},
		{"WWWWW,j898z8DD8zBBDDDyw,yz9E8z8zz9Z8zBDD55y5yyyyyyyyyyyyyyy5DDBB89989zz9zE8zB8ZZ95wWWWWWWWWWWWWWWWWW\0"},
		{"WWWWWW,  DzBD5BBBBBzz55EE8B8888z8Z9B555D55yyyyyyyyyyyjyyyyy55DBBB9999zB888E8zzZZ9BwWWWWWWWWWWWWWWWWW\0"},
		{"WWWWWWWw y5DDDzBBzzzzzDBBBD8889zzZ9BDDyyjjjyyyyyyyyjjjyjyjyyy5DDDz9998zz8zE9zBEZEzWwWWWWWWWWWWWWWWWW\0"},
		{"WWWWWWWW WBBBDDBDBBBBBB5DBzE8z9BBZ9EEZZZEzDjyyyyyyyyjWwwWWWWWjj55D8999zzzB9EzB9ZZ8ywWWWWWWWWWWWWWWWW\0"},
		{"WWWWWWWW,,DB55z9Wy5DDBBD5D988z9BBZDyyy5D9E9B5yyyyyyj5B9ZZZZZZEEE98z998888B8E8BzZZ85wWWWWWWWWWWWWWWWW\0"},
		{"WWWWWWWWw,BBy5DDwDy5DDDDD8ZBzzEBDZ998Bjw,yDBD5yyyyy5B8zDjw,,wjyD8999889z88B998BEZ8BwWWWWWWWWWWWWWWWW\0"},
		{"j,jjjWWWW jyWWBBw555555D8ZEBzzEBDEZZZZZZZ95DDDyyyy55D5y5DBz8zBjj5Dz8z88z89Bz99zzZ9zWwWWWWWWWWWWWWWWW\0"},
		{"D    wjWW,yzDDBzWy5DDDBzEZ8zDz9BDEE8zBZZZ99DBDyyyy5DBD98ZZ8ZBZZZE998zz9z998B899DZEzjwWWWWWWWWWWWWWWW\0"},
		{"Z  ,, wWwwwDzBBzB5DBBzz8E8zBD88zB9z8BDDyyyDDDDyjjy55DB955ZZ9yz998zBDBz9z9998z8Ez9ZzywWWWWWWWWWWWWWWW\0"},
		{"8B ,,,WwWWwwy55DBBBBz88E8BBDzEBzBEDDDDD555y555jjjy5yyy5D5yjy5DD5555DBzE8BE89z8888Zz5wWWWWWWWWWWWWWWW\0"},
		{",yww wWWWWjy5D5DDDD55DB9zBBz98z8z85555yyyyy55yjjyyyyyyjyyyyyyyyyy5DBB89ZB999z8888Z8DwwWWWWWWWWWWWWWW\0"},
		{"   wWWWWWjy55DDDDDBDBBE8BDz89D9z88DD5yyyyyy55jjWjyyyyjjjjjjjjyyyy5DBB89ZZB9999888Z8DWWWWWWWWWWWWWWWW\0"},
		{"yWWWWWWWj5DDDDDDDBB89EEBBzE8D9EB9BDD55yyyy555jjjy55yyjyyjjyyyjyyy5DBzEZZZ989999zzZ95WWWWWWWWWWWWWWWW\0"},
		{"WwWWWWjy55DDDDBBB9ZZzzzBz985zZ88EDDD55555DD5yjjjy5555yyjjyjyyyy55DDB8EZZZZ89E99BzZE5jWWWWWWWWWWWWWWW\0"},
		{"wWWWWy555DDDDBB8ZZj ,9zz9z5BZZBEzDD5555DBB55jjjjjy55D5yyyyyyyyy55DBBZZZZZ9999E9DzZZ5jWWWWWWWWWWWWWWW\0"},
		{"WWWjy55DDDDDBzZZB   j988ByzZZ9zZDDBBDDDDDD5yjjWjyyy5D55555yyy5y5DBzZZZZ989999Z859ZZBWWWWWWWWWWWWWWWW\0"},
		{"Wjjy55D5DDBB9Z9   w 5ZzDD9ZZ9z8ZZyDBDD55y55D5555DzBDyyy55yyyyy5DB9ZZZ9z898889ZByZZZ9jWWWWWWWWWWWWWWW\0"},
		{"jy5555DDDB8ZZw  ww, 58DzZZZ9D9EEZEy5555DjWWjyDBBD5yyyjjjy55DDz8EZZZ8z8888zz9ZZjzZZZByWWWWWWWWWWWWWWW\0"},
		{"j55555DDB8Zz  ,WWwj 589ZZE8BZZZ8ZZZD55DD898ByjWWw,,,,wjyDD5DB8EE8zzzz88zz8ZZZB5Z98ED5WWWWWWWWWWWWWWW\0"},
		{"y555DDDBEZW  wWWwjw 9ZZE9z8ZZEZ9EZZZ85D5yD99EZEZZEEEE998BDzEZZE99988888EZZ89Dj8DB8ED5jWWWWWWWWWWWWWW\0"},
		{"555DDDzZ8j8BWWWWW, 8ZZzz8EZZE9ZE9EEZZZ5yD55BzzzBBz99zDzz8ZZZE999999EZZE8zBB5wyDDz9ED5jWWWWWWWWWWWWWW\0"},
		{"55DDD8ZDwjyjwWWWw,jZZ8z899EZE9ZE9EEEEZZ5Wy55Bz8zzzzDD8EE998988999E8D555555jyDyBz899D5jWWWWWWWWWWWWWW\0"},
		{"5DDB9Zw jw ,wWWww,DZ88Bz8BEE98ZEEE9Z9EZZB,WWjjjjjWWBZZz5B8z888zB5jyDz9ZEBDZZZZz889EB5yWWWWWWWWWWWWWW\0"},
		{"5DBZ9jjWwwwwWWwwWWyEZ88BDE9EEEZ9EEEEZEZZZE, ,wWWWyZZZjW5EZZZ85yz889E9zDBZZZEEZZEZZEz5yWWWWWWWWWWWWWW\0"},
		{"5BED ,yy5yjWw  wW,yEZZ8DzE99EE99EE9EEEE9ZZZZ8D55BZZZ W,DEED5jz989zBzzE8E9899999zZZZ8yyWWWWWWWWWWWWWW\0"},
		{"B98Wjw,,,    j5zzD88ZZZzEzz9ZEE8ZE9EEEE8ZEZZZZZZZZZyWDyz9ZyzZZEzzEE999B9898889988ZZE5yWWWWWWWWWWWWWW\0"},
		{"99w WWWWWBZZz998z9Z9D8ZZE9B99EE8ZEE9EE99ZZZZZZE855BjBy5EZ9jEZ8z998888B88zzzzzBzzB9ZZBjWWWWWWWWWWWWWW\0"},
		{"D  jD889999B8E999ZZy,y8ZZ9899988EZ98Z89ZZZZZ9895jBzDzzDBBDjzZ888B88zzzzzzzzzzzzzzBzZEjWWWWWWWWWWWWWW\0"},
		{"BZZZ988E98z89EEZZD jzZZ5z888z8zEEE989zZZZZZBBzB5z8Bzz55jzy5EZBz9zzBzzzzzzzzzz8z88zBzZDWWWWWWWWWWWWWW\0"},
		{"D58ZE999E99ZZZ85,WzZZBW5ZZZ98zzz998zBZZZE9Dz8zBzBED95wWwD5DDzzEzzBzzzzzz8zzzzzzzzzzz8EjWWWWWWWWWWWWW\0"},
		{"zyy8Z9E9E8EZ8yWyD8Z9,wz9ZZZEE9zB8zz8ZZEE8Bz8zDBzZ88zj5jWy555Z9Bz8zzzzzzzzzzzzzzz88z88ZD,WWWWWWWWWWWW\0"},
		{"ZDyyEZEEZE955Bz9Z9w BZZZE88EEZ9998EZ8ZEBDz9BDzzEEz8BDZ5W5BzDZzz8Bz88zzzzzzzzzzzzzzz889ZWwWWWWWWWWWWW\0"},
		{"ZZDDBZZZ9yD9E9ZBw,zZZZZz5zZZZE88EZZ8855z9ByB899D98yZz98yWB8BE8zB98zzzzzzzzzzzzzzzzzz88E8,WjWWWWWWWWW\0"},
		{"ZZEzzZZED9E9B5jDZZZEzDyDE9Dz9z89E85zZZZBj59ZZ98ZZ8y9wjZzDDzBZ8B9zzzzzzzzzzzzzzzz888z889Z5,WjWWWWWWWW\0"},
		{"ZZZz8EZB9EzyDEZZzyjwWD9z5BD55Bjj5B8Dw ,BZZZZjwyE99BZBj98BDDBZz8zzzzzzz8zzzzzzzzzzzzz888EZ,wWWWWWWWWW\0"},
		{"8ZZ98EE995DZZE5W, jEZzBz898w WBE8z5jyzz B zB ,W9B9zEE5BEBD59ZzzBzzzzzzzzzzz8zzzzzzzzz888ZD,WWWWWWWWW\0"},
		{"DZZ98988D8ZEDyBB9Z8zBB9ZZw yEE9zBByzZB jjDZ WjDZB9z58z5ZDB58Z8Bzzzzzz8zzzzzzzzz88888z888EZwWWWWWWWWW\0"},
		{"DZZE9EBBEEZEDB8Bj D9EZZy j99E8Dzz,W89j5DzZW yj8898z58E58DzzzZ8Bzzzzzzzzzzzz88zzz8zzzzz888ZB jjWWWWWW\0"},
		{"zZZE98BE999B8EEWEZZEEDwWzzDBDyyzDD9ZzyBzzD,5zDE89z8z99zzzBzzZBzzzzzzzzzzzzzzzzzzzz8zzzzzzEZjjjjjWWWW\0"}
	}
};

struct item
{
	uint32_t caseNum;
	char* name;
	uint32_t weight;
	uint32_t range_min;
	uint32_t range_max;
}typedef s_item;

struct member
{
	char* name;
	uint32_t	cardNum;
	uint32_t	used;
	uint32_t	remaind;
}typedef s_member;

s_item items[] = 
{
	{0,		"1 Cards Random\0",	10,	0,	0},
	{1,		"3 Cards Select\0",	15,	0,	0},
	{2,		"3 Cards Random\0",	25,	0,	0},
	{3,		"6 Cards Select\0",	15,	0,	0},
	{4,		"6 Cards Random\0",	25,	0,	0},
	{5,		"FULL SET      \0",	10,	0,	0},
	{999,	NULL,				0,	0,	0}
};

#define DEFAULT_CARD_NUM	(200)

#define MEMBERS				(12)
s_member izone[] = 
{
	{"WONYOUNG \0", 200, 0, 200},
	{"SAKURA   \0", 200, 0, 200},
	{"YURI     \0", 200, 0, 200},
	{"YENA     \0", 200, 0, 200},
	{"YUJIN    \0", 200, 0, 200},
	{"NAKO     \0", 200, 0, 200},
	{"EUNBI    \0", 200, 0, 200},
	{"HYEWON   \0", 200, 0, 200},
	{"HITOMI   \0", 200, 0, 200},
	{"CHAEWON  \0", 200, 0, 200},
	{"MINJU    \0", 200, 0, 200},
	{"CHAEYEON*\0", 200, 0, 200},
	{NULL,			0,   0, 0}
};


int main(int argc, char** argv)
{
	s_item* p_item;
	uint32_t		val;
	uint32_t		lui32_tmp;
	char			luc101_inputBuf[101];

	unsigned int	imageNums;

	unsigned int	i;

	uint32_t		randomMemberPickChk = 0;

	lui32_tmp = 0;

	p_item = items;
	while(p_item->name)
	{
		p_item->range_min = lui32_tmp + 1;
		lui32_tmp += p_item->weight;
		p_item->range_max = lui32_tmp;

		printf("Name : %s, percentage : %02d%%, range : %3d ~ %3d\n",
			p_item->name, p_item->weight, p_item->range_min, p_item->range_max	);
		p_item++;
	}

	while(1)
	{

		srand((uint32_t)time(NULL)+getpid());
		imageNums = (uint32_t)(rand()%IMAGE_NUMS);
		for(i = 0; i < IMAGE_0_ROW; i++)
		{
			printf("%s\n", imageText[imageNums].data[i]);
		}

		printf("For Doing get Item, Press AnyKey : ");
		gets(luc101_inputBuf);
#if 0
//Test Codes
		for(i=0; luc101_inputBuf[i] != '\0'; i++)
		{
			printf("%c ", luc101_inputBuf[i]);
		}
		printf("Char Len = %d\n", i);
#endif

		printf("Wait 1 sec... \n");
		sleep(1);

		srand((uint32_t)time(NULL)+getpid());
		val = (uint32_t)((((double)rand()/(double)RAND_MAX)*100.0f)+1);

		printf("Number is '%d'\n", val);

		p_item = items;
		while(p_item->name)
		{
			if((p_item->range_min <= val) && (p_item->range_max >= val))
			{
				printf("Name : %s, percentage : %02d%%, range : %3d ~ %3d\n",
					p_item->name, p_item->weight, p_item->range_min, p_item->range_max	);

				randomMemberPickChk = 0;
				switch(p_item->caseNum)
				{
					case 0:
						for(i=0; i<1; i++)
						{
label_re_pick_case0:
							val = (uint32_t)(rand()%MEMBERS);
							if(randomMemberPickChk & (1<<val))	//invalid
							{
								goto label_re_pick_case0;
							}
							else
							{
								randomMemberPickChk |= (1<<val);
								printf("Name : %s\n", izone[val].name);
							}
						}	
						break;

					case 1: 
						break;

					case 2:
						for(i=0; i<3; i++)
						{
label_re_pick_case2:
							val = (uint32_t)(rand()%MEMBERS);
							if(randomMemberPickChk & (1<<val))	//invalid
							{
								goto label_re_pick_case2;
							}
							else
							{
								randomMemberPickChk |= (1<<val);
								printf("Name : %s\n", izone[val].name);
							}
						}	
						break;

					case 3:
						break;

					case 4:
						for(i=0; i<6; i++)
						{
label_re_pick_case4:
							val = (uint32_t)(rand()%MEMBERS);
							if(randomMemberPickChk & (1<<val))	//invalid
							{
								goto label_re_pick_case4;
							}
							else
							{
								randomMemberPickChk |= (1<<val);
								printf("Name : %s\n", izone[val].name);
							}
						}	
						break;

					case 5:
						break;

					default:
						break;
				}

				printf("Do Action and press enter to continue...");
				gets(luc101_inputBuf);
				break;
			}
			else
			{
			}

			p_item++;
		}
		printf("\n");

	}

	return 0;
}
