


typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;


static int8_t
(safe_add_func_int8_t_s_s)(  )
{}
static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1  )
{}
static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left  )
{}
static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left  )
{}
static int16_t
(safe_add_func_int16_t_s_s)(  )
{}
static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{}
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left  )
{}
static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left  )
{}
static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{}
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
(safe_mod_func_int32_t_s_s)(  )
{}
static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{}
static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
(safe_mul_func_uint8_t_u_u)(  )
{}
static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1  )
{}
static uint8_t
(safe_lshift_func_uint8_t_u_s)( int right )
{}
static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1  )
{}
static uint16_t
(safe_sub_func_uint16_t_u_u)( uint16_t ui2 )
{}
static uint16_t
(safe_mod_func_uint16_t_u_u)( uint16_t ui2 )
{}
static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static
  int32_t
  g_3
  =
  0x2C70BB74L;
static
  int32_t
  g_71
  [9]
  =
  {
4L,
4L,
4L,
4L,
4L,
4L,
4L,
4L,
4L
};
static
  int32_t
  g_201
  =
  0x90B57F07L;
static
  int32_t
  g_300
  =
  0xA87531F4L;
static
  uint32_t
  g_329
  [2]
  [7]
  [6]
  =
  {
{{1UL, 0x86E9DE6DL, 0xA3237E1DL, 0x097B45DCL, 0xA200B0FFL, 4294967290UL}, {4294967291UL, 1UL, 0xA3237E1DL, 0x30B79297L, 0xA3237E1DL, 1UL}, {4294967293UL, 0x30B79297L, 4294967290UL, 2UL, 0xCBC3065EL, 0x58EB26F2L}, {2UL, 0xCBC3065EL, 0x58EB26F2L, 0xA3237E1DL, 3UL, 1UL}, {1UL, 0xCBC3065EL, 0xB8C5FC2AL, 0xB8C5FC2AL, 0xCBC3065EL, 1UL}, {0xCBC3065EL, 0x30B79297L, 1UL, 0x86E9DE6DL, 0xA3237E1DL, 0x097B45DCL}, {0xB8C5FC2AL, 1UL, 0x4A936E5EL, 0x30B79297L, 3UL, 0xB8C5FC2AL}}, {{1UL, 0xA3237E1DL, 0x30B79297L, 0xA3237E1DL, 1UL, 4294967291UL}, {0xA200B0FFL, 4294967291UL, 3UL, 1UL, 0xB8C5FC2AL, 0x58EB26F2L}, {0x86E9DE6DL, 1UL, 0xB8C5FC2AL, 4294967291UL, 0x58EB26F2L, 0x58EB26F2L}, {4294967293UL, 3UL, 3UL, 4294967293UL, 4294967290UL, 4294967291UL}, {0x58EB26F2L, 0x097B45DCL, 0x30B79297L, 2UL, 0xA3237E1DL, 0xB8C5FC2AL}, {0x30B79297L, 0x86E9DE6DL, 0x4A936E5EL, 1UL, 0xA3237E1DL, 1UL}, {1UL, 0x097B45DCL, 1UL, 0xCBC3065EL, 4294967290UL, 0x86E9DE6DL}} };
static
  int8_t
  g_344
  =
  1L;
static
  int16_t
  g_367
  =
  0x0D65L;
static
  uint32_t
  g_458
  =
  0xBCA3924BL;
static
  int16_t
  g_555
  =
  (-1L);
static
  uint8_t
  g_588
  =
  0xDDL;
static
  int16_t
  g_697
  [9]
  [2]
  =
  {
{0x29D4L,
(-1L)},
{0x29D4L,
0x29D4L},
{0x29D4L,
(-1L)},
{0x29D4L,
0x29D4L},
{0x29D4L, (-1L)}, {0x29D4L,
0x29D4L},
{0x29D4L, (-1L)}, {0x29D4L,
0x29D4L},
{0x29D4L, (-1L)} };
static
  uint16_t
  g_774
  =
  0x02FDL;
static
  int32_t
  g_866
  =
  3L;
static
  volatile
  uint32_t
  g_1265
  [5]
  [8]
  =
  {
{0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL},
{0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL,
0xDDA6101AL},
{0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL}, {0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL}, {0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL, 0xDDA6101AL,
0xDDA6101AL} };
static
  int32_t
  g_1782
  =
  0xAEC5DABAL;
static
  uint8_t
  g_1810
  [1]
  =
  {
3UL
};
static
  int16_t
  g_1835
  [1]
  [7]
  [5]
  =
  {
{{(-9L), (-9L), 2L, (-9L), (-9L)}, {(-1L), (-9L), (-1L), (-1L), (-9L)}, {(-9L), (-1L), (-1L), (-9L), (-1L)}, {(-9L), (-9L), 2L, (-9L), (-9L)}, {(-1L), (-9L), (-1L), (-1L), (-9L)}, {(-9L), (-1L), (-1L), (-9L), (-1L)}, {(-9L), (-9L), 2L, (-9L), (-9L)}} };
static
  int8_t
  g_2004
  [7]
  [1]
  [10]
  =
  {
{{0L, 9L, 0L, (-1L), 0L, (-1L), (-1L), 0L, (-1L), 0L}}, {{0L, 0L, 0xD5L, 0L, 0xE5L, (-1L), 2L, (-1L), 0xE5L, 0L}}, {{0L, (-3L), 0L, (-1L), 0x7BL, 0L, 2L, 2L, 0L, 0x7BL}}, {{0xD5L, 0L, 0L, 0L, (-1L), 0L, 9L, 0L, 9L, 0L}}, {{2L, (-3L), (-1L), (-3L), 2L, 0xD5L, (-1L), 9L, 9L, (-1L)}}, {{0L, 0xD5L, 0L, 0L, 0xD5L, 0L, 0xE5L, (-1L), 2L, (-1L)}}, {{(-3L), 0L, 2L, 9L, 2L, 0L, (-3L), 0xE5L, 0L, 0L}} };
static
  uint32_t
  g_2066
  [9]
  =
  {
0xA0898CF5L,
0xA0898CF5L,
0xA0898CF5L,
0xA0898CF5L,
0xA0898CF5L,
0xA0898CF5L,
0xA0898CF5L,
0xA0898CF5L,
0xA0898CF5L
};
static
  volatile
  uint32_t
  g_2388
  [2]
  =
  {
0UL,
0UL
};
static
  int32_t
  g_3350
  =
  (-1L);
static
  uint32_t
  g_3847
  =
  4294967295UL;
static
  int16_t
func_1
();
static
  int32_t
func_4
(int16_t
p_5
);
static
  int16_t
func_6
(uint8_t
p_7
);
static
  uint16_t
func_14
(
int8_t
p_16
);
static
  int16_t
func_22
(int8_t
p_23,
int8_t
p_24
);
static
  int32_t
func_42
(uint16_t
p_43
);
static
  uint8_t
func_45
(uint32_t
p_46
,
uint32_t
p_48,
int16_t
p_49,
uint16_t
p_50
);
static
  int32_t
func_56
(
);
static int16_t
func_1 ()
{
  int16_t
    l_2
    [1];
  int32_t
    l_4276
    =
    0x302D452BL;
  uint8_t
    l_4277
    =
    0x13L;
  int32_t
    l_4279
    =
    (-1L);
  uint16_t
    l_4480
    =
    0x4A29L;
  int
    i;
  for
    (i
     =
     0;
     i
     <
     1;
     i++)
    l_2
      [i]
      =
      0x2062L;
  for
    (g_3
     =
     0;
     (g_3
      >=
      0);
     )
  {
    int32_t
      l_4266
      =
      0L;
    uint16_t
      l_4445
      =
      9UL;
    if (func_4 ((l_2[g_3] = func_6 (((0x9869L > (safe_lshift_func_int8_t_s_u (0x5AL, 7))) <= l_2[g_3])))))
    {
      if ((((((((safe_add_func_uint32_t_u_u ((+(safe_rshift_func_uint8_t_u_u (g_866, 7))), g_3350)) || 0xFDL) >= g_2388[1]) & g_3847) < ((((safe_rshift_func_int16_t_s_u (l_2[0], 3)) != ((-1L) <= (safe_sub_func_int8_t_s_s (((0x9BL & l_2[0]) != 0x17L), (-1L))))) | g_1835[0][3][2]) < g_555)) < l_2[g_3]) | g_344))
      {
 for
   (g_588
    =
    0;
    (g_588
     <
     57);
    )
 {
   return
     l_2
     [0];
 };
 }
      else
      {
 for
   (l_4279
    =
    0;
    (l_4279
     >=
     (-1));
    )
 {
{
    if (func_4 ((l_2[g_3] = func_6 (((0x9869L > (safe_lshift_func_int8_t_s_u (0x5AL, 7))) <= l_2[g_3])))))
    {
      }
    else
    {
      int32_t
 l_4481
 =
 0x766BB33FL;
      if (((safe_sub_func_uint32_t_u_u ((((safe_sub_func_int8_t_s_s ((((safe_sub_func_uint16_t_u_u ( (((1UL >= (safe_lshift_func_int16_t_s_s ((((((safe_sub_func_int8_t_s_s (l_4276, (0x5CE5838AL && 0xCE452925L))) == (safe_lshift_func_uint8_t_u_s ( 0))) || (+(g_2004[0][0][2] = ((((((safe_sub_func_uint32_t_u_u ((l_4277 & ((!9L) & (safe_mul_func_uint8_t_u_u ( )))), l_4445)) || g_697[8][0]) & l_4266) && g_329[1][0][0]) < 0x75L) | 0x94EC5207L)))) > 0xC7L) >= g_697[8][0]) ))) < g_367) != g_2066[7]))) == 0xA6E1DCAAL) > l_4480), 0x6DL)) | l_4481) || 65535UL), l_4445)) < l_4481))
      {
 }
      else;
      }
  }
 };
}
      }
    else;
  };
  }
static int32_t
func_4
  (int16_t
   p_5
)
{
  return
    g_588;
}
static int16_t
func_6
  (uint8_t
   p_7
)
{
  int32_t
    l_19
    =
    0xD0176DF7L;
  int8_t
    l_3776
    =
    0xD9L;
  if (g_3)
  {
    int32_t
      l_37
      =
      (-2L);
    l_37
      =
      (safe_lshift_func_int16_t_s_u
       ((0x673E7ED6L > (g_71[7] = (!(safe_mul_func_int16_t_s_s (p_7, func_14 ( (l_19 & (safe_mod_func_uint16_t_u_u ( func_22 ((safe_mod_func_int32_t_s_s ( )), l_19))))  )))))) ));
  }
  else
  {
    uint8_t
      l_3775
      =
      0xA7L;
    int32_t
      l_3777
      =
      0x2BF1DB03L;
    if ((safe_add_func_int32_t_s_s ((safe_sub_func_uint8_t_u_u ((safe_add_func_int32_t_s_s ((g_300 = p_7), ((l_3775 & 0x9C9AL) < p_7))), (0x86CE1C01L ^ (p_7 & (l_3777 = ((p_7 | 0xE7L) | l_3776)))))), l_3775)))
    {
      return
 p_7;
    }
    else;
  }
  }
static uint16_t
func_14
  (
   int8_t
   p_16
   )
{}
static int16_t
func_22
  (int8_t
   p_23,
   int8_t
   p_24
)
{
  if ((1L ^ (safe_lshift_func_int16_t_s_s (p_23 ))))
  {
    int32_t
      l_55
      =
      0x094BF7D6L;
    int32_t
      l_2017
      =
      5L;
    if (((g_71[7] = func_42 ((p_24 & func_45 ((safe_add_func_int16_t_s_s ( )) , g_3, (l_55 > (l_2017 = ((g_71[7] = func_56 (   )) >= g_2004[1][0][4]))), g_1810[0])) )) >= 1UL))
    {
      }
    else;
  }
  else
  {
    for
      (g_1782
       =
       11;
       (g_1782
 <
 23);
       )
    ;;
  }
  }
static int32_t
func_42
  (uint16_t
   p_43
   )
{}
static uint8_t
func_45
  (uint32_t
   p_46
   ,
   uint32_t
   p_48,
   int16_t
   p_49,
   uint16_t
   p_50
)
{
  int32_t
    l_2018
    =
    5L;
  uint32_t
    l_2064
    =
    0x2D09995EL;
  int32_t
    l_2068
    [5]
    [4]
    =
    {
{0L,
 1L,
 1L,
 0L},
  {(-1L), 1L, 0xBFECDBAFL, 1L}, {1L, 0x3A6E6068L, 0xBFECDBAFL, 0xBFECDBAFL}, {(-1L), (-1L), 1L, 0xBFECDBAFL}, {0L, 0x3A6E6068L, 0L, 1L} };
  int32_t
    l_2069
    [9]
    =
    {
0L,
7L,
0L,
7L,
0L,
7L,
0L,
7L,
0L
  };
  if ((0UL && (l_2068[4][0] = (safe_lshift_func_int8_t_s_u (0x5BL, g_1835[0][3][2])))))
  {
    }
  else
  {
    int32_t
      l_2307
      =
      (-9L);
    for
      (p_49
       =
       0;
       (p_49
 !=
 (-23));
       )
    {
      uint32_t
 l_2284
 =
 4294967294UL;
      int32_t
 l_2285
 =
 0x23D170B6L;
      for
 (g_774
  =
  0;
  (g_774
   <
   20);
  g_774++)
      {
 for
   (g_201
    =
    0;
    (g_201
     >=
     (-27));
    g_201
    =
    safe_sub_func_int16_t_s_s
    (g_201,
     6))
 {
   int32_t
     l_2306
     =
     (-1L);
   l_2307
     =
     (safe_unary_minus_func_int32_t_s
      ((safe_mod_func_uint8_t_u_u (((p_46 = (l_2306 = (safe_sub_func_uint32_t_u_u ((safe_add_func_int8_t_s_s ( )), p_46)))) == l_2064) ))));
 }
      }
for
 (g_774
  =
  0;
  (g_774
   <
   20);
  g_774++)
      {
 uint16_t
   l_2291
   =
   0x6398L;
 l_2069
   [7]
   =
   (((safe_mul_func_int8_t_s_s ((safe_lshift_func_uint8_t_u_s ( (safe_add_func_uint8_t_u_u (p_46, ((((g_2004[6][0][8] && ((safe_mod_func_uint32_t_u_u (p_46, l_2307)) || ((((safe_rshift_func_int8_t_s_u ((l_2285 = (safe_mul_func_int16_t_s_s (((safe_rshift_func_int16_t_s_u (((safe_add_func_uint16_t_u_u ((safe_lshift_func_int8_t_s_s (((l_2018 ^ (p_48 == ((!((safe_add_func_uint8_t_u_u ((((safe_mul_func_uint8_t_u_u ( )) >= g_1265[2][5]) > 0L), 0x7FL)) && l_2291)) >= l_2018))) & p_48) )) )) || 4294967288UL), 6)) != 0UL), p_50))) )) >= p_49) == l_2284) == g_1835[0][3][2]))) <= 0x7D15L) >= g_458) < g_2004[6][0][1]))))) )) && p_50) & g_2066[8]);
 }
    };
  }
  }
static int32_t
func_56
  (
   )
{}
int
main ()
{
  func_1
    ();
  }
