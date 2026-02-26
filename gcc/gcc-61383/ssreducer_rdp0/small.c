


typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;


static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
(safe_lshift_func_int8_t_s_u)( unsigned int right )
{}
static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
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
  int8_t
  g_7
  =
  (-6L);
static
  int32_t
  g_21
  =
  0L;
static
  int32_t
  g_75
  =
  0x4C99FFFBL;
static
  uint16_t
  g_94
  =
  0x8AA1L;
static
  uint32_t
  g_96
  =
  0x7709B807L;
static
  uint32_t
  g_101
  =
  0xA66BE80DL;
static
  uint32_t
  g_129
  =
  9UL;
static
  uint8_t
  g_176
  =
  0x44L;
static
  int8_t
  g_181
  =
  0L;
static
  uint32_t
  g_244
  =
  0x01B28DB7L;
static
  int16_t
  g_245
  =
  (-5L);
static
  uint8_t
  g_276
  =
  0UL;
static
  int32_t
  g_304
  =
  4L;
static
  uint32_t
  g_370
  =
  0x31730F26L;
static
  int32_t
  g_1039
  =
  0x6D312621L;
static
  uint32_t
  g_1309
  =
  4294967295UL;
static
  uint32_t
  g_1504
  =
  4294967295UL;
static volatile uint32_t g_1578 = 4294967291UL;
static
  uint32_t
  g_1670
  =
  1UL;
static
  uint32_t
  g_1671
  =
  0UL;
static
  int8_t
  g_1902
  =
  (-5L);
static
  uint32_t
  g_2189
  =
  0x0108E6C1L;
static
  uint16_t
func_1
();
static
  int32_t
func_2
(int8_t
p_3,
uint8_t
p_4
);
static
  uint16_t
func_22
(
int8_t
p_24
,
int8_t
p_26
);
static
  const
  uint8_t
func_30
(int16_t
p_31
);
static
  int16_t
func_33
(uint16_t
p_34
);
static
  uint16_t
func_39
(int8_t
p_40
);
static
  uint16_t
func_41
(int32_t
p_42
);
static
  int32_t
func_46
(uint32_t
p_47
);
static
  uint16_t
func_50
(
uint8_t
p_52
,
int32_t
p_54
);
static
  uint8_t
func_55
(
const
uint32_t
p_58
);
static uint16_t
func_1 ()
{
  int16_t
    l_6
    =
    0L;
  int32_t
    l_1502
    =
    0x744250C5L;
  uint16_t
    l_1503
    =
    0x4FC1L;
  int8_t
    l_1870
    =
    0L;
  int16_t
    l_1887
    =
    0xF0ACL;
  int8_t
    l_1942
    =
    (-5L);
  int8_t
    l_2119
    =
    (-1L);
  uint8_t
    l_2188
    =
    251UL;
  uint32_t
    l_2192
    =
    0x7FB453E7L;
  int32_t
    l_2281
    =
    0L;
  const
    int32_t
    l_2284
    =
    0xE9CCD730L;
  if (((!(~(func_2 (l_6, g_7 ) < ((g_1504 = ((0xB8B13202L < g_1039) ^ ((0x498EL != (safe_lshift_func_int8_t_s_s ((safe_mod_func_uint8_t_u_u (((((l_1503 = (safe_add_func_uint8_t_u_u ((l_1502 = (safe_add_func_int16_t_s_s ((g_1309 <= (safe_rshift_func_int16_t_s_s ((safe_rshift_func_int8_t_s_u ((-1L), 2)), 9))), l_6))), g_1039))) != (-1L)) && 0x53L) ^ 1L), g_1039)), 6))) < l_6))) == 0xBBEAEAA1L)))) >= 0xE521L))
  {
    }
  else;
  g_21
    =
    ((l_2281 < l_2284) || ((g_245 = (g_1902 < (g_1671 | ((g_370 = (safe_mod_func_uint32_t_u_u ((safe_rshift_func_uint16_t_u_u (((g_181 = (g_1504 == ((((!((l_1503 != ((safe_lshift_func_int8_t_s_s (((safe_rshift_func_int16_t_s_s ((safe_lshift_func_uint8_t_u_s (((1L | (safe_add_func_int8_t_s_s ((l_2119 | 0x4466B2CBL), 0xA6L))) < l_1887), g_1670)), g_1578)) <= g_1039), l_2192)) || 0x5850L)) >= l_1942)) == 4294967290UL) > l_1887) & g_2189))) & l_2192), l_2188)), g_75))) && l_1870)))) || 0xC351L));
  }
static int32_t
func_2
  (int8_t
   p_3,
   uint8_t
   p_4
   )
{
  uint32_t
    l_8
    =
    0x4F147909L;
  int32_t
    l_12
    =
    0x29989D22L;
  lbl_988:
  l_8 = g_7;
  for
    (p_4
     =
     (-8);
     (p_4
      >=
      53);
     )
  {
    g_21
      =
      (safe_mul_func_uint16_t_u_u
       ((safe_lshift_func_uint8_t_u_s (0x12L, 0)), (safe_mul_func_uint16_t_u_u (p_4, (safe_rshift_func_int16_t_s_u (g_7, 0))))));
    if ((func_22 ( (((1L & l_8) || ((((safe_sub_func_uint8_t_u_u (func_30 (func_33 ((safe_lshift_func_uint16_t_u_u (65535UL, (l_12 = func_39 (((func_41 (func_46 (g_7)   ) ^ 4UL) & g_181)))))  ) ), p_3)) && g_94) && l_8) >= p_4)) & 0L) , l_8 ) && 0xBE6DL))
    {
      uint8_t
 l_867
 =
 1UL;
      return
 l_867;
    }
    else;
  };
  }
static uint16_t
func_22
  (
   int8_t
   p_24
   ,
   int8_t
   p_26
   )
{
  return
    p_26;
}
static const uint8_t
func_30
  (int16_t
   p_31
   )
{
  int32_t
    l_835
    =
    0xCCA57B9AL;
  return
    l_835;
}
static int16_t
func_33
  (uint16_t
   p_34
   )
{
  return
    p_34;
}
static uint16_t
func_39
  (int8_t
   p_40
)
{
  uint8_t
    l_211
    =
    255UL;
  int32_t
    l_219
    =
    (-7L);
  int32_t
    l_226
    =
    (-1L);
  for
    (g_176
     =
     0;
     (g_176
      <
      12);
     )
  {
    int32_t
      l_218
      =
      (-5L);
    int32_t
      l_220
      =
      0xFB97F931L;
    int32_t
      l_223
      =
      9L;
    int32_t
      l_227
      =
      0xEB7A0ED4L;
    if ((0x4F92L < (safe_lshift_func_int16_t_s_s ((((p_40 != (safe_lshift_func_uint16_t_u_u ((p_40 != (((safe_rshift_func_int8_t_s_s (g_244, 2)) | ((safe_add_func_int8_t_s_s (((((l_220 = (safe_mod_func_int8_t_s_s ((((safe_rshift_func_int16_t_s_u ((-2L), ((((((safe_mul_func_int8_t_s_s ((l_227 = ((safe_sub_func_uint16_t_u_u ((l_223 = (safe_rshift_func_int16_t_s_u (((((safe_rshift_func_int8_t_s_s ((((((g_96 != ((safe_mul_func_int16_t_s_s (p_40, ((l_226 = ((0xFDL | ((safe_add_func_int8_t_s_s (0xC0L, g_7)) && 0x1EL)) & (-1L))) || 0xF3F102FCL))) | g_96)) || l_223) || 6UL) > l_219) != l_227), 0)) > 0x68B3L) > 1L) || p_40), 7))), l_211)) == l_227)), g_181)) || p_40) & 1L) > 0UL) || p_40) != 7L))) == 0xC58CL) == p_40), p_40))) == (-3L)) != p_40) ^ p_40), g_96)) >= g_94)) <= (-10L))), l_218))) || 0x282EL) != l_218), 6))))
    {
      }
    else
    {
      int8_t
 l_319
 =
 0xE3L;
      const
 uint16_t
 l_334
 =
 65535UL;
      if ((p_40 <= ((!(l_227 = (!l_319))) || (safe_lshift_func_int8_t_s_s ((((+(safe_add_func_int8_t_s_s ((l_219 = (-1L)), (l_220 = (g_101 != (safe_sub_func_uint16_t_u_u (0x2827L, (safe_add_func_uint8_t_u_u ((g_75 == ((safe_sub_func_int16_t_s_s (((g_304 > (l_319 ^ (safe_rshift_func_uint8_t_u_u ((safe_rshift_func_int16_t_s_s ((p_40 >= g_304), g_244)), g_276)))) && p_40), p_40)) > l_218)), l_334))))))))) ^ (-4L)) >= 1L), p_40)))))
      {
 if (g_245)
   break;
 }
      else
      {
 uint32_t
   l_633
   =
   4294967295UL;
 int16_t
   l_654
   =
   7L;
 if (p_40)
{{
      uint16_t
 l_271
 =
 65530UL;
      if (l_220)
 break;
      if (l_271)
 continue;
      }
}
 if (((p_40 = (+(safe_mul_func_int16_t_s_s (g_94, (5L <= (l_633 >= (safe_mul_func_uint16_t_u_u ((safe_mul_func_int8_t_s_s ((safe_sub_func_int16_t_s_s (0L, (safe_lshift_func_int8_t_s_u ( 5)))), l_654)), l_223)))))))) || l_654))
 {
   }
 else;
 }
    }
  };
  return
    g_129;
}
static uint16_t
func_41
  (int32_t
   p_42
   )
{
  int32_t
    l_200
    =
    0x01793202L;
  return
    l_200;
}
static int32_t
func_46
  (uint32_t
   p_47
)
{
  int8_t
    l_71
    =
    (-9L);
  int32_t
    l_72
    =
    0xCA7DBC8BL;
  int32_t
    l_73
    =
    0L;
  int32_t
    l_74
    =
    (-2L);
  int8_t
    l_177
    =
    9L;
  l_177
    =
    (safe_lshift_func_uint16_t_u_s
     (func_50
      (
       func_55
       (  ((safe_add_func_int8_t_s_s ((!(safe_rshift_func_int16_t_s_s (((~0x5E60D1F2L) < ((safe_mul_func_uint16_t_u_u ((safe_lshift_func_uint8_t_u_u (255UL, 3)), (g_75 = ((((g_21 <= ((-9L) & (l_74 = (safe_sub_func_int16_t_s_s ((l_73 = (l_72 = l_71)), (-1L)))))) & (-1L)) & 0x4B4EA65DL) || 0x84L)))) ^ 0x129E5E26L)), 5))), g_7)) == l_71)) , p_47), 7));
  return
    l_72;
}
static uint16_t
func_50
  (
   uint8_t
   p_52
   ,
   int32_t
   p_54
)
{
  uint8_t
    l_109
    =
    9UL;
  int32_t
    l_110
    =
    (-1L);
  int32_t
    l_128
    =
    (-1L);
  uint32_t
    l_148
    =
    0UL;
  int16_t
    l_151
    =
    1L;
  uint32_t
    l_152
    =
    4294967289UL;
  g_21
    =
    (safe_lshift_func_int16_t_s_u
     ((safe_mod_func_uint32_t_u_u ((~(((!(safe_sub_func_int32_t_s_s ((((((l_128 == (-8L)) && l_110) <= (safe_mod_func_uint8_t_u_u ((safe_sub_func_int8_t_s_s ((g_101 && (g_94 | (p_54 = (safe_mul_func_uint16_t_u_u (((((safe_rshift_func_uint8_t_u_u ((safe_sub_func_int16_t_s_s (((safe_lshift_func_uint16_t_u_s (g_96, 2)) && (l_148 = g_94)), (safe_add_func_int32_t_s_s (((g_7 = 5L) ^ p_52), g_75)))), 1)) >= 0x5F07L) && (-7L)) > 5UL), g_21))))), p_52)), l_151))) ^ l_109) <= (-1L)), l_110))) ^ 1UL) | l_152)), g_21)), 14));
  return
    p_54;
}
static uint8_t
func_55
  (
   const
   uint32_t
   p_58
)
{
  return
    g_7;
}
int
main
  (int
   argc,
   char
   *argv
   []
)
{
  func_1
    ();
  return
    0;
}
