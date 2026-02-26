
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
int printf (const char *, ...);

static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1  )
{
 
  return






    si1 * ((int8_t)1);
}

static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left  )
{
 
  return

    ((left < 0) || (((unsigned int)((unsigned int)1)) >= 32) || (left > ((127) >> ((unsigned int)((unsigned int)1))))) ?
    ((left)) :

    (left << ((unsigned int)((unsigned int)1)));
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
(safe_rshift_func_int16_t_s_s)(int16_t left  )
{
 
  return

    ((left < 0) || (((int)((int)1)) < 0) || (((int)((int)1)) >= 32))?
    ((left)) :

    (left >> ((int)((int)1)));
}

static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left  )
{
 
  return

    ((left < 0) || (((unsigned int)((unsigned int)1)) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)((unsigned int)1)));
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
(safe_sub_func_int64_t_s_s)(  )
{}







static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1  )
{
 
  return ui1 + ((uint8_t)1);
}

static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static uint8_t
(safe_lshift_func_uint8_t_u_s)( int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (((uint8_t)1) > ((255) >> ((int)right)))) ?
    ((((uint8_t)1))) :

    (((uint8_t)1) << ((int)right));
}

static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left  )
{
 
  return

    (((unsigned int)((unsigned int)1)) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)((unsigned int)1)));
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



static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1  )
{
 
  return ui1 + ((uint32_t)1);
}

static uint32_t
(safe_sub_func_uint32_t_u_u)(  )
{}




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
 crc32_byte ((val>>0) & 0xff);
 }

static void
transparent_crc (uint64_t val, char* vname )
{
 crc32_8bytes(val);
 if (((int)1)) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}



static volatile int32_t g_3 = (-9L);

static uint32_t g_75 = 0xDC6F3D13L;
static uint64_t g_99[4] = {
  0x819422B6A99605DBLL,
  0x819422B6A99605DBLL,
  0x819422B6A99605DBLL,
  0x819422B6A99605DBLL
};

static int16_t g_189 = 0L;

static uint64_t g_806 = 0UL;
static uint32_t g_897 = 0x4F78D624L;

static uint8_t g_1394 = 0x36L;
static uint8_t g_1863 = 0UL;
static int32_t g_1923 = 0x2A8A2152L;
static int8_t g_2945 = (-1L);
static int32_t g_3331 = (-4L);

static uint8_t g_4669 = 0x4FL;



static int64_t func_1 ();
static
  int8_t
  func_13
  (    uint16_t p_18);
static int64_t
func_1 ()
{
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
  for (; (((int32_t)1) >= 0); )
    {
      int16_t l_24 = (-1L);
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
      (safe_rshift_func_int16_t_s_s
  ((~
    (safe_mul_func_uint16_t_u_u
     ((safe_mul_func_int16_t_s_s
       (((((int32_t)1) <
   (safe_mul_func_uint8_t_u_u
    (2UL,
     (l_4768[2][2][0] =
      func_13 (
        ((uint32_t)1))))))) )),
      ((int32_t)1)))) ));
      for (g_806 = 0; (g_806 <= 3); )
 {
   for (g_189 = 0; (g_189 <= 3); )
     {
       int64_t l_4803 = 0x96458143B7FABA93LL;
       if (((int64_t)1))
  {
    if ((safe_mul_func_uint16_t_u_u
         ((g_75 >=
    (((4L |
       (safe_add_func_uint8_t_u_u
        (((safe_mod_func_uint16_t_u_u
    (((uint8_t)1),
     (((safe_mod_func_int16_t_s_s
        (((safe_rshift_func_uint8_t_u_u
           ((safe_add_func_uint32_t_u_u
      (((safe_rshift_func_int16_t_s_u
         ((safe_mul_func_uint16_t_u_u
           (((volatile int32_t)1),
            (safe_lshift_func_uint8_t_u_s
      (
       (((int32_t)1) <=
        ((l_4837[4][1][5] =
          ((safe_add_func_uint64_t_u_u ((~(safe_mul_func_uint8_t_u_u ((safe_mul_func_uint8_t_u_u ((((safe_add_func_int64_t_s_s (((((int16_t)1))), (safe_mul_func_int8_t_s_s ((safe_mod_func_int16_t_s_s (((uint32_t)1), l_24)) ))))) != ((int16_t)1)), g_1394)), l_4803))), g_806)) && 0x57L)) == ((int16_t)1))))))) )) | 0x5379D1F7L) )) )) && 0x4229L), 0xDA2DL)) != g_75) | 0x5C5773AEL)))) ))) > ((int8_t)1)) != 0x563A4A5C11C1B531LL)), l_4803)))
      {
        g_3 = ((((uint32_t)1) >=
         (l_4768[2][2][0] !=
          ((((uint32_t)1) == ((int32_t)1)) >=
    (safe_rshift_func_int16_t_s_s
     (((0x5C91L <
        ((((uint16_t)1)) >= l_4837[4][1][5])) < 0x991BL) ))))));
        ((((safe_mul_func_uint8_t_u_u
       (l_4837[4][1][4],
        ((+
          (((~
      ((((+
          (((((((((g_99[3] =
            l_4837[4][1][5]) >
           (safe_mul_func_int16_t_s_s
            (((((uint8_t)1)) &
       (((((((((((uint16_t)1)) > ((uint32_t)1))) > ((uint32_t)1)) && ((uint32_t)1)) == 0x0933C1602E5D7963LL)) != ((uint8_t)1)) >= ((int64_t)1))) ))) >= ((uint16_t)1)) ^ ((int32_t)1)) | ((int8_t)1))) > 0x9CL) || ((int16_t)1)) == ((uint16_t)1))) & 2L) != 0x9F52L) | ((uint32_t)1))) | ((int32_t)1)) | g_897))))) >= g_1394) | ((int8_t)1)) == ((int32_t)1));
      }
    else
      {


        g_3331
   =
   (safe_lshift_func_int8_t_s_u
    ((safe_add_func_uint16_t_u_u
      ((safe_mul_func_uint8_t_u_u
        (((safe_sub_func_int64_t_s_s
    ( )) < l_4837[4][1][5]), ((uint16_t)1))) )) ));
        }
    if (l_4768[2][2][0])
      break;
  }
       else;



       };
   for (; (g_1863 <= 3); )
     {
       for (g_4669 = 0; (g_4669 <= 3); )
  {
    {
      for (; (g_1863 <= 3); )
        {
   for (; (g_2945 <= 3); )
     {
       for (; (((int16_t)1) <= 3); )
         {
    return ((uint32_t)1);
         };
       };
   for (; (g_897 <= 3); )
     {
       g_1923 = 0L;
       for (l_24 = 3; (l_24 >= 0); l_24 -= 1)
         {
    (((int32_t)1)
       >=
       (safe_mul_func_uint8_t_u_u
        (((int8_t)1),
         ((safe_add_func_uint8_t_u_u
           ((g_4669 =
      (0xCFL == ((uint32_t)1))) ))
          || ((int16_t)1)))));
         }
       };
   };
      }





  };
       {
  for (; (g_189 <= 3); )
    {
      if (((int64_t)1))
        {
   if ((safe_mul_func_uint16_t_u_u
        ((g_75 >=
          (((4L |
      (safe_add_func_uint8_t_u_u
       (((safe_mod_func_uint16_t_u_u
          (((uint8_t)1),
           (((safe_mod_func_int16_t_s_s
       (((safe_rshift_func_uint8_t_u_u
          ((safe_add_func_uint32_t_u_u
            (((safe_rshift_func_int16_t_s_u
        ((safe_mul_func_uint16_t_u_u
          (((volatile int32_t)1),
           (safe_lshift_func_uint8_t_u_s
            (
             (((int32_t)1) <=
       ((l_4837[4][1][5] =
         ((safe_add_func_uint64_t_u_u ((~(safe_mul_func_uint8_t_u_u ((safe_mul_func_uint8_t_u_u ((((safe_add_func_int64_t_s_s (((((int16_t)1))), (safe_mul_func_int8_t_s_s ((safe_mod_func_int16_t_s_s (((uint32_t)1), l_24)) ))))) != ((int16_t)1)), g_1394)), ((int64_t)1)))), g_806)) && 0x57L)) == ((int16_t)1))))))) )) | 0x5379D1F7L) )) )) && 0x4229L), 0xDA2DL)) != g_75) | 0x5C5773AEL)))) ))) > ((int8_t)1)) != 0x563A4A5C11C1B531LL)), ((int64_t)1))))
     {
       ((((safe_mul_func_uint8_t_u_u
      (l_4837[4][1][4],
       ((+
         (((~
     ((((+
         (((((((((g_99[3] =
           l_4837[4][1][5]) >
          (safe_mul_func_int16_t_s_s
           (((((uint8_t)1)) &
             (((((((((((uint16_t)1)) > ((uint32_t)1))) > ((uint32_t)1)) && ((uint32_t)1)) == 0x0933C1602E5D7963LL)) != ((uint8_t)1)) >= ((int64_t)1))) ))) >= ((uint16_t)1)) ^ ((int32_t)1)) | ((int8_t)1))) > 0x9CL) || ((int16_t)1)) == ((uint16_t)1))) & 2L) != 0x9F52L) | ((uint32_t)1))) | ((int32_t)1)) | g_897))))) >= g_1394) | ((int8_t)1)) == ((int32_t)1));
     }
   else;
   }
      else;
      for (; (((uint32_t)1) <= 3); )
        {
   for (; (g_75 <= 3); g_75 += 1);
        };
    };
  }



     };


   };
    };
  }







static int8_t
  func_13
  (    uint16_t p_18)
{
  int32_t l_3709 = 0x71CB1649L;
  lbl_4042:
  for (; (((uint32_t)1) <= 3); )
    {
      if ((p_18 ==
    (safe_rshift_func_uint8_t_u_u
     (((((int8_t)1)) | ((int16_t)1)) ))))
 {
   for (; (((uint8_t)1) <= 3); )
     {
       g_3
  =
  ((safe_mod_func_uint16_t_u_u
    (((safe_add_func_int64_t_s_s
       ((safe_sub_func_uint32_t_u_u
         ( )), ((int16_t)1))) <= ((int16_t)1)),
     l_3709)) | ((uint64_t)1));
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
  transparent_crc (g_3, "g_3" );
  return 0;
}
