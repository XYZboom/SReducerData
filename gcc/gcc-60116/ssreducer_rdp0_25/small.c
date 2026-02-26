
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
static void
platform_main_end(uint32_t crc )
{





 printf ("checksum = %X\n", crc);
}

static int8_t
(safe_add_func_int8_t_s_s)(  )
{}

static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
 
  return






    si1 * si2;
}

static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}



static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1  )
{
 
  return






    si1 * ((int16_t)1);
}

static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
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
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}




static int64_t
(safe_add_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807LL)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807LL -1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static int64_t
(safe_sub_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807LL))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static int64_t
(safe_mod_func_int64_t_s_s)(int64_t si1, int64_t si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-9223372036854775807LL -1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}







static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1  )
{
 
  return ui1 + ((uint8_t)1);
}

static uint8_t
(safe_sub_func_uint8_t_u_u)(  )
{}

static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
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
(safe_rshift_func_uint8_t_u_s)(uint8_t left  )
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
{
 
  return ui1 + ((uint16_t)1);
}

static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static uint16_t
(safe_rshift_func_uint16_t_u_u)(  )
{}



static uint32_t
(safe_unary_minus_func_uint32_t_u)( )
{
 
  return -((uint32_t)1);
}

static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1  )
{
 
  return ui1 + ((uint32_t)1);
}

static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1  )
{
 
  return ui1 - ((uint32_t)1);
}




static uint64_t
(safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}


static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;

static void
crc32_gentab ()
{
 uint32_t crc;
 int i, j;

 for (i = 0; i < 256; i++) {
  crc = i;
  crc32_tab[i] = crc;
 }
}

static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
static void
crc32_8bytes (uint64_t val)
{
 crc32_byte ((val>>8) & 0xff);
 }

static void
transparent_crc (uint64_t val  )
{
 crc32_8bytes(val);
 }



static volatile int32_t g_3 = (-9L);
static int32_t g_4[2][10] = {
  {0xC01D4C3FL,
   0L,
   0xC01D4C3FL,
   0xC01D4C3FL,
   0L,
   0xC01D4C3FL,
   0xC01D4C3FL,
   0L,
   0xC01D4C3FL,
   0xC01D4C3FL},
  {0L,
   0L,
   1L,
   0L, 0L,
   1L, 0L,
   0L, 1L, 0L}
};

static int8_t g_56 = 1L;
static uint32_t g_75 = 0xDC6F3D13L;
static int32_t g_97 = 0xD68C9157L;
static uint64_t g_99[4] = {
  0x819422B6A99605DBLL,
  0x819422B6A99605DBLL,
  0x819422B6A99605DBLL,
  0x819422B6A99605DBLL
};

static uint16_t g_178 = 1UL;
static int16_t g_189 = 0L;
static int32_t g_208[3] = {
  (-4L),
  (-4L),
  (-4L)
};

static uint8_t g_236 = 0x61L;
static uint32_t g_280 = 18446744073709551615UL;
static uint8_t g_357 = 0xD8L;
static uint8_t g_359 = 1UL;
static int64_t g_455 = (-7L);
static int16_t g_540[1][1][10] = {
  {{0xA42FL, 0xA42FL, 0xA42FL, 0xA42FL, 0xA42FL, 0xA42FL, 0xA42FL, 0xA42FL,
    0xA42FL, 0xA42FL}}
};

static uint64_t g_806 = 0UL;
static uint32_t g_897 = 0x4F78D624L;
static int32_t g_921[8][10][1] = {
  {{9L}, {0x6DD76205L}, {0x26D23D1FL}, {1L}, {9L}, {1L}, {0x26D23D1FL},
   {0x6DD76205L}, {9L}, {0x6DD76205L}}, {{0x26D23D1FL}, {1L}, {9L}, {1L},
      {0x26D23D1FL}, {0x6DD76205L}, {9L},
      {0x6DD76205L}, {0x26D23D1FL}, {1L}},
{{9L}, {1L}, {0x26D23D1FL}, {0x6DD76205L}, {9L}, {0x6DD76205L}, {0x26D23D1FL}, {1L}, {9L}, {1L}}, {{0x26D23D1FL}, {0x6DD76205L}, {9L},
      {0x6DD76205L}, {0x26D23D1FL}, {1L}, {9L},
      {1L}, {0x26D23D1FL}, {0x6DD76205L}}, {{9L},
         {0x6DD76205L},
         {0x26D23D1FL},
         {1L},
         {9L},
         {1L},
         {0x26D23D1FL},
         {0x6DD76205L},
         {9L},
         {0x6DD76205L}},
{{0x26D23D1FL}, {1L}, {9L}, {1L}, {0x26D23D1FL}, {0x6DD76205L}, {9L}, {0x6DD76205L}, {0x26D23D1FL}, {1L}}, {{9L}, {1L}, {0x26D23D1FL},
        {0x6DD76205L}, {9L}, {0x6DD76205L},
        {0x26D23D1FL}, {1L}, {9L}, {1L}},
{{0x26D23D1FL}, {0x6DD76205L}, {9L}, {0x6DD76205L}, {0x26D23D1FL}, {1L}, {9L}, {1L}, {0x26D23D1FL}, {0x6DD76205L}}
};

static uint32_t g_983 = 0xDE5240FBL;
static uint8_t g_1060 = 0xC8L;

static int16_t g_1182[3] = {
  0xE348L,
  0xE348L,
  0xE348L
};

static uint8_t g_1394 = 0x36L;
static int64_t g_1395 = 4L;
static uint32_t g_1513 = 1UL;
static int8_t g_1551 = 0xAFL;
static uint16_t g_1678 = 0x9F7CL;
static uint8_t g_1863 = 0UL;
static int32_t g_1923 = 0x2A8A2152L;
static uint64_t g_2227 = 0UL;
static uint32_t g_2241 = 0x610B7749L;
static int16_t g_2519 = (-6L);
static uint64_t g_2599 = 3UL;
static int8_t g_2945 = (-1L);
static int16_t g_2974 = 0x061DL;
static int32_t g_3331 = (-4L);
static uint32_t g_3487 = 0x2836864CL;
static int64_t g_3807 = (-7L);
static volatile int32_t g_3898 = (-1L);
static int16_t g_3950 = 0xD215L;
static volatile uint16_t g_4447 = 0UL;
static int8_t g_4576[3] = {
  0xA0L,
  0xA0L,
  0xA0L
};

static uint32_t g_4880 = 0xA38F5E48L;



static int64_t func_1 ();
static
  int8_t
  func_13
  ( int32_t p_15 , int32_t p_17, uint16_t p_18);
static int64_t
func_1 ()
{
  uint8_t l_19 = 4UL;
  int32_t l_4768[7][9][3] =
  {
    {
      {
      0x6F93F8E4L, 0L, 0L},
      {
      0xBCED9506L, (-1L), 1L},
      {
      0x407BAE69L, 0x8030389FL, 9L},
      {
      (-1L), 6L, 2L},
      {
      (-1L), (-9L), 0x19A92BE5L},
      {
      1L, 0xE3332CFCL, 1L},
      {
      (-1L), 0x6F93F8E4L, 0x08E852D4L},
      {
      0xDD32B7ABL, 0L, 0x9DE17132L},
      {
    0x381A88EDL, 0xCD5F16A9L, 0xB5B1B244L}},
    {
      {
      0xE3332CFCL, 0x86998E08L, 0xDB8DC516L},
      {
      0xB5B1B244L, 0x08E852D4L, 0xA407A085L},
      {
      0xAB96A36AL, 0xAB96A36AL, 0x4529A934L},
      {
      0L, (-9L), 0L},
      {
      0x432A9120L, (-1L), 0x063C23FDL},
      {
      (-1L), 0x1C1793E0L, (-6L)},
      {
      (-7L), 0x432A9120L, 0x063C23FDL},
      {
      1L, 0L, 0L},
      {
    (-5L), 8L, 0L}},
    {
      {
      0x19A92BE5L, 4L, 1L},
      {
      1L, (-5L), 0xF28FA565L},
      {
      0x407BAE69L, (-9L), (-10L)},
      {
      0L, 0x2E05679EL, 0x4529A934L},
      {
      0xCD5F16A9L, 0x08E852D4L, 0L},
      {
      0x55D20815L, 0x349578D6L, 8L},
      {
      (-6L), 0xAFF17ACDL, 0x407BAE69L},
      {
      1L, (-1L), 1L},
      {
    (-4L), 0x239DFD81L, (-1L)}},
    {
      {
      0xC6F15672L, (-1L), 0L},
      {
      (-9L), (-1L), 0xAFF17ACDL},
      {
      9L, 8L, 0L},
      {
      (-9L), 0L, 0L},
      {
      0xC6F15672L, 0xDB8DC516L, 8L},
      {
      (-4L), (-6L), (-9L)},
      {
      1L, 0xD4428E3AL, 0x432A9120L},
      {
      (-6L), 0L, 0xA407A085L},
      {
    0x55D20815L, (-7L), 0xDCE8B061L}},
    {
      {
      0xCD5F16A9L, 0xA407A085L, 0x19A92BE5L},
      {
      0L, (-7L), 6L},
      {
      0x407BAE69L, 0xDF137B5EL, (-1L)},
      {
      1L, 0xC6F15672L, 0xC6F15672L},
      {
      0x19A92BE5L, 1L, 0x1C1793E0L},
      {
      (-5L), 0xDCE8B061L, 0xF5F490A1L},
      {
      1L, 0x8030389FL, (-7L)},
      {
      (-7L), 1L, (-5L)},
      {
    (-1L), 0x8030389FL, 0x6F93F8E4L}},
    {
      {
      0x432A9120L, 0xDCE8B061L, 1L},
      {
      6L, 1L, 0x90AEB8D0L},
      {
      0x86998E08L, 0xC6F15672L, 0xC83337E4L},
      {
      (-10L), 0xDF137B5EL, 0x239DFD81L},
      {
      2L, (-7L), 0xD4428E3AL},
      {
      4L, 0xA407A085L, 3L},
      {
      (-1L), (-7L), 0x8892F792L},
      {
      0xDF137B5EL, 0L, 0xCD5F16A9L},
      {
    0x8892F792L, 0xD4428E3AL, 8L}},
    {
      {
      (-6L), (-6L), 0xF33BD556L},
      {
      1L, 0xDB8DC516L, (-1L)},
      {
      (-1L), 0L, (-6L)},
      {
      0xE3332CFCL, 8L, (-7L)},
      {
      (-6L), (-1L), (-6L)},
      {
      8L, (-1L), (-1L)},
      {
      0x60180667L, 0x239DFD81L, 0xF33BD556L},
      {
      0xDCE8B061L, (-1L), 8L},
      {
  0xB5B1B244L, 0xAFF17ACDL, 0xCD5F16A9L}}};
  int32_t l_4872[3];
  int32_t l_4873[6][9] =
  {
    {
    0x8FF09EB2L, 5L, 0xE715FA55L, 5L, 0xCD7D07BDL, 3L, 3L, 0xCD7D07BDL, 5L},
    {
    0x8FF09EB2L,
 0x74158486L,
 0x8FF09EB2L, 3L, 0L, 0xE715FA55L, (-3L), (-3L), 0xE715FA55L},
    {
    0xE715FA55L, 5L, 0x8FF09EB2L, 5L, 0xE715FA55L, 5L, 0xCD7D07BDL, 3L, 3L},
    {
    5L, 0xAD18FF4BL, 0xE715FA55L, 3L, 0xE715FA55L, 0xAD18FF4BL, 5L, 0L,
 0xD53E6E15L},
    {
    (-3L), 0xD53E6E15L, 5L, 5L, 0xD53E6E15L, 0xAD18FF4BL, 0x74158486L,
 0xE715FA55L, 0x8FF09EB2L},
    {
  0xCD7D07BDL, 0xAD18FF4BL, 0x8FF09EB2L, 0xD53E6E15L, 3L, (-3L), 3L,
 0xD53E6E15L, 0x8FF09EB2L}};
  int16_t l_5017 = 7L;
  int i, j, k;
  for (i = 0; i < 3; i++)
    l_4872[i] = 0x0860B758L;
  for (; (g_4[1][2] >= 0); )
    {
      int16_t l_24 = (-1L);
      int32_t l_4769 = 1L;
      int32_t l_4837[5][2][10] =
      {
 {
   {
   (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L}
   ,
   {
   (-4L), (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L)}
 }
 ,
 {
   {
   (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L}
   ,
   {
   (-4L), (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L)}
 }
 ,
 {
   {
   (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L}
   ,
   {
   (-4L), (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L)}
 }
 ,
 {
   {
   (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L}
   ,
   {
   (-4L), (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L)}
 }
 ,
 {
   {
   (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L}
   ,
   {
   (-4L), (-4L), 0xE9C0DC89L, 0xE9C0DC89L, (-4L), (-4L), 0xE9C0DC89L,
       0xE9C0DC89L, (-4L), (-4L)}
 }
      };
      int8_t l_4842[6] =
      {
      0x01L, 1L, 0x01L, 0x01L, 1L, 0x01L};
      l_4769
 =
 (safe_rshift_func_int16_t_s_s
  ((~
    (safe_mul_func_uint16_t_u_u
     ((safe_mul_func_int16_t_s_s
       ((g_540[0][0][0] =
  (g_4[1][5] <
   (safe_mul_func_uint8_t_u_u
    (2UL,
     (l_4768[2][2][0] =
      func_13 (
        ((int32_t)1)
        , g_4[0][0], ((uint32_t)1))))))) )),
      g_4[1][2]))), g_2945));
      for (g_806 = 0; (g_806 <= 3); )
 {
   int8_t l_4838 = (-4L);
   uint8_t l_4883 = 1UL;
   int32_t l_4906 = 0xDE4468F8L;
   for (g_189 = 0; (g_189 <= 3); )
     {
       int64_t l_4803 = 0x96458143B7FABA93LL;
       int32_t l_4836 = (-8L);
       uint16_t l_4960 = 5UL;
       if (g_1395)
  {
    uint16_t l_4787[1];
    int32_t l_4871 = 0x22DB2806L;
    int i;
    for (i = 0; i < 1; i++)
      l_4787[i] = 65529UL;
    if ((safe_mul_func_uint16_t_u_u
         ((g_75 >=
    (((4L |
       (safe_add_func_uint8_t_u_u
        ((g_359 =
          (safe_mod_func_uint16_t_u_u
    (l_19,
     (((safe_mod_func_int16_t_s_s
        (((safe_rshift_func_uint8_t_u_u
           ((safe_add_func_uint32_t_u_u
      (((safe_rshift_func_int16_t_s_u
         ((safe_mul_func_uint16_t_u_u
           (g_3898,
            (safe_lshift_func_uint8_t_u_s
      (g_236,
       (l_4769 <=
        ((l_4837[4][1][5] =
          ((safe_add_func_uint64_t_u_u ((~(safe_mul_func_uint8_t_u_u ((safe_mul_func_uint8_t_u_u (((l_4836 = (safe_add_func_int64_t_s_s ((g_455 = (g_3807 = g_3950)), (safe_mul_func_int8_t_s_s ((safe_mod_func_int16_t_s_s (g_3487, l_24)), g_280))))) != g_540[0][0][5]), g_1394)), l_4803))), g_806)) && 0x57L)) == g_540[0][0][1])))))), g_1513)) | 0x5379D1F7L) )), l_4838)) && 0x4229L), 0xDA2DL)) != g_75) | 0x5C5773AEL)))) ))) > g_4576[2]) != 0x563A4A5C11C1B531LL)), l_4803)))
      {
        int32_t l_4884 = 9L;
        int32_t l_4885 = (-1L);
        g_208[1] =
   ((g_3487 =
     ((((l_4884 =
         ((safe_mod_func_uint8_t_u_u
    ((((safe_mul_func_int8_t_s_s
        ((g_56 =
          (l_24 <= (l_4871 = 0UL))),
         ((g_97 ^
           ((((safe_mul_func_uint8_t_u_u
        ((g_4880), 0x91L)) <= 0x1A6AL)
      &&
      ((0x3E57L >
        (safe_sub_func_int64_t_s_s
         ((l_4769 <=
           ((l_4837[0][1][9] =
      l_4883) <= l_4842[4])),
          g_208[2]))) > g_2241))
     && g_4447)) & g_806))) <= g_4880) ==
      g_1678),
     g_1923)) ^ l_4872[0])) < g_4576[2]) <=
       l_4885) > (-5L))) >= g_2974);
        g_921[5][3][0] =
   ((((safe_mul_func_uint8_t_u_u
       (l_4837[4][1][4],
        ((+
          (((~
      ((((+
          (((((((((g_99[3] =
            l_4837[4][1][5]) >
           (safe_mul_func_int16_t_s_s
            (((g_178 =
        l_4883) &
       (((l_4884 =
          ((((g_2227 =
       ((((uint16_t)1)) > g_280)) > g_280) && ((uint32_t)1)) == 0x0933C1602E5D7963LL)) != g_359) >= g_1395)) ))) >= l_4787[0]) ^ l_4885) | g_56)) > 0x9CL) || g_540[0][0][4]) == l_4787[0])) & 2L) != 0x9F52L) | g_983)) | l_4871) | g_897))))) >= g_1394) | ((int8_t)1)) == l_4885);
      }
    else
      {
        int32_t l_4938[1];


        g_3331
   =
   (safe_lshift_func_int8_t_s_u
    ((safe_add_func_uint16_t_u_u
      ((safe_mul_func_uint8_t_u_u
        (((safe_sub_func_int64_t_s_s
    (((((~
         (safe_lshift_func_int8_t_s_u
          ((l_4787[0] |
     (safe_add_func_int8_t_s_s
      (
       ))), l_19))) == l_4938[0]) < g_357) >= g_189), 0x36CCBABFFCE52C27LL)) < l_4837[4][1][5]), l_4787[0])) )), g_1394));
        l_4960 =
   ((g_983 =
     (((int32_t)1) >=
      (safe_add_func_uint32_t_u_u
       ((safe_rshift_func_uint16_t_u_u
         ( )) )))) && ((uint32_t)1));
        g_208[2] =
   (((((safe_mod_func_uint8_t_u_u (0x43L, 254UL)) !=
       g_178) | (l_4906 =
          (safe_sub_func_uint8_t_u_u
           (
     )))) &
     (safe_mod_func_int64_t_s_s
      ((l_4938[0] ==
        (safe_mul_func_uint8_t_u_u
         (9UL,
          (l_4836 =
    (safe_mul_func_uint8_t_u_u
     ((g_1060 =
       (((uint64_t)1) >
        (safe_sub_func_int32_t_s_s
         ((safe_lshift_func_int8_t_s_u
           (l_4960, 4)), g_921[2][0][0])))),
      l_4838)))))),
       0x67BA2B2E2B7C8DD9LL))) ^ l_4787[0]);
      }
    if (l_4768[2][2][0])
      break;
  }
       else;



       };
   for (g_1863 = 0; (g_1863 <= 3); )
     {
       uint64_t l_5084 = 0xA9C667284D8615AFLL;
       for (; (g_897 <= 3); )
  {
    for (l_24 = 3; (l_24 >= 0); )
      {


        for (; (g_2945 <= 3); )
   {
     for (; (g_1923 >= 0); )
       {
         l_4873
    [4]
    [7]
    =
    (safe_sub_func_uint32_t_u_u
     (((safe_lshift_func_int8_t_s_u
        (0x20L,
         (l_5017 !=
          (((~(g_99[2] = g_280)) >= g_3950) >
           (((safe_sub_func_int32_t_s_s
       ((g_921[5][7][0] =
         (safe_sub_func_int64_t_s_s
          (0xFE2B8FA57479FD98LL,
           (g_3807 <=
            ((safe_add_func_uint8_t_u_u
       ((safe_unary_minus_func_uint32_t_u ()) )) | 0x1A6A892DD97E9186LL))))), ((int8_t)1))) >= ((int64_t)1)) != l_5084))))) == ((uint32_t)1)) ));
         };
     };




      };





    };
       {
  for (; (g_189 <= 3); )
    {
      int64_t l_4803 = 0x96458143B7FABA93LL;
      int32_t l_4836 = (-8L);
      if (g_1395)
        {
   uint16_t l_4787[1];
   if ((safe_mul_func_uint16_t_u_u
        ((g_75 >=
          (((4L |
      (safe_add_func_uint8_t_u_u
       ((g_359 =
         (safe_mod_func_uint16_t_u_u
          (l_19,
           (((safe_mod_func_int16_t_s_s
       (((safe_rshift_func_uint8_t_u_u
          ((safe_add_func_uint32_t_u_u
            (((safe_rshift_func_int16_t_s_u
        ((safe_mul_func_uint16_t_u_u
          (g_3898,
           (safe_lshift_func_uint8_t_u_s
            (g_236,
             (l_4769 <=
       ((l_4837[4][1][5] =
         ((safe_add_func_uint64_t_u_u ((~(safe_mul_func_uint8_t_u_u ((safe_mul_func_uint8_t_u_u (((l_4836 = (safe_add_func_int64_t_s_s ((g_455 = (g_3807 = g_3950)), (safe_mul_func_int8_t_s_s ((safe_mod_func_int16_t_s_s (g_3487, l_24)), g_280))))) != g_540[0][0][5]), g_1394)), l_4803))), g_806)) && 0x57L)) == g_540[0][0][1])))))), g_1513)) | 0x5379D1F7L) )), ((int8_t)1))) && 0x4229L), 0xDA2DL)) != g_75) | 0x5C5773AEL)))) ))) > g_4576[2]) != 0x563A4A5C11C1B531LL)), l_4803)))
     {
       g_208[1] =
         ((g_3487 =
    ((((((safe_mod_func_uint8_t_u_u
          ((((safe_mul_func_int8_t_s_s
       ((g_56 =
         (l_24 <= (0UL))),
        ((g_97 ^
          ((((safe_mul_func_uint8_t_u_u
       ((g_4880),
        0x91L)) <= 0x1A6AL)
            &&
            ((0x3E57L >
       (safe_sub_func_int64_t_s_s
        ((l_4769 <=
          ((l_4837[0][1][9] =
            l_4883) <= l_4842[4])),
         g_208[2]))) > g_2241))
           && g_4447)) & g_806))) <=
      g_4880) == g_1678),
           g_1923)) ^ l_4872[0])) < g_4576[2]) <=
      ((int32_t)1)) > (-5L))) >= g_2974);
       }
   else
     {
       int32_t l_4938[1];
       g_3331
         =
         (safe_lshift_func_int8_t_s_u
          ((safe_add_func_uint16_t_u_u
     ((safe_mul_func_uint8_t_u_u
       (((safe_sub_func_int64_t_s_s
          (((((~
        (safe_lshift_func_int8_t_s_u
         ((l_4787[0] |
           (safe_add_func_int8_t_s_s
            (
      ))), l_19))) == l_4938[0]) < g_357) >= g_189), 0x36CCBABFFCE52C27LL)) < l_4837[4][1][5]), l_4787[0])) )), g_1394));
       g_208[2] =
         (((((safe_mod_func_uint8_t_u_u (0x43L, 254UL))
      != g_178) | (l_4906 =
            (safe_sub_func_uint8_t_u_u
      (
       )))) &
    (safe_mod_func_int64_t_s_s
     ((l_4938[0] ==
       (safe_mul_func_uint8_t_u_u
        (9UL,
         (l_4836 =
          (safe_mul_func_uint8_t_u_u
           ((g_1060 =
      (((uint64_t)1) >
       (safe_sub_func_int32_t_s_s
        ((safe_lshift_func_int8_t_s_u
          (((uint16_t)1), 4)), g_921[2][0][0])))),
     l_4838)))))),
      0x67BA2B2E2B7C8DD9LL))) ^ l_4787[0]);
     }
   if (l_4768[2][2][0])
     break;
        }
      else
        {
   g_921
     [1]
     [9]
     [0]
     =
     ((l_4906 <= g_3950) >=
      (safe_mod_func_int16_t_s_s
       (l_4838,
        (l_4769
         &&
         ((g_455 =
    ((0x3D222EB2D167D453LL
      ||
      ((safe_rshift_func_uint16_t_u_u
        (
         )) != l_4768[0][6][1])) >
     ((int32_t)1))) ^ ((uint16_t)1))))));
   }
      for (; (g_4880 <= 3); )
        {
   for (; (g_2599 <= 3); )
     {
       ((~
    ((safe_rshift_func_int16_t_s_s
      ((((safe_mod_func_int64_t_s_s
          ((safe_rshift_func_uint8_t_u_s
     ((((uint16_t)1) <=
       (((g_1395 =
          (((g_1182[2] =
      (safe_mod_func_uint16_t_u_u
       ((((uint16_t)1)), g_540[0][0][2]))) == 0xBB15L) >= 1L)) ^ (-1L)) < l_4768[2][2][0])) )), ((int32_t)1))) >= 0x31E3L) && g_178), 5)) < 0x1A88L)) >= (-1L));
       };
   for (; (g_75 <= 3); g_75 += 1);
        };
    };
  for (g_1863 = 0; (g_1863 <= 3); )
    {
      for (; (g_2945 <= 3); )
        {
   for (; (g_1923 >= 0); )
     {
       l_4873
         [4]
         [7]
         =
         (safe_sub_func_uint32_t_u_u
          (((safe_lshift_func_int8_t_s_u
      (0x20L,
       (l_5017 !=
        (((~(g_99[2] = g_280)) >= g_3950) >
         (((safe_sub_func_int32_t_s_s
     ((g_921[5][7][0] =
       (safe_sub_func_int64_t_s_s
        (0xFE2B8FA57479FD98LL,
         (g_3807 <=
          ((safe_add_func_uint8_t_u_u
            ((safe_unary_minus_func_uint32_t_u ()) )) | 0x1A6A892DD97E9186LL))))), ((int8_t)1))) >= ((int64_t)1)) != l_5084))))) == ((uint32_t)1)) ));
       return g_983;
     };
   };
      };
  }



     };


   };
    };
  }







static int8_t
  func_13
  ( int32_t p_15 , int32_t p_17, uint16_t p_18)
{
  int32_t l_3709 = 0x71CB1649L;
  lbl_4042:
  for (; (((uint32_t)1) <= 3); )
    {
      if ((p_18 ==
    (safe_rshift_func_uint8_t_u_u
     (((((int8_t)1)) | g_2519), 4))))
 {
   for (; (((uint8_t)1) <= 3); )
     {
       g_3
  =
  ((safe_mod_func_uint16_t_u_u
    (((safe_add_func_int64_t_s_s
       ((safe_sub_func_uint32_t_u_u
         ((safe_rshift_func_uint8_t_u_u
    (0xFFL,
     (((p_18 &
        ((p_18 |
          ((((((uint8_t)1) >=
       ((safe_mul_func_uint16_t_u_u
         (((((g_1551 =
       (safe_add_func_uint16_t_u_u
        ((safe_sub_func_int64_t_s_s
          (p_15, 0xA4746D6BFFAA20B5LL))
         ))) | ((((((p_17 =
           ((~0xBCL) &
            (1L | g_1678)))
          >= 0x241F9B21L) >
         g_2519) ==
        g_897) & ((int16_t)1)))) <=
     3UL) | 5UL), 65535UL)) <= ((int32_t)1)))
      || p_17)
     || p_15) != 5L)) < 1UL)) & 0x9FL) <=
      g_4[1][2]))) )), g_1182[2])) <= g_1182[1]),
     l_3709)) | g_2227);
       };
   }
      else
 {
   return g_99[1];
 }
      };



  }







int
main ()
{
  crc32_gentab ();
  func_1 ();
  transparent_crc (g_983  );
  platform_main_end (crc32_context ^ 0xFFFFFFFFUL );
  return 0;
}
