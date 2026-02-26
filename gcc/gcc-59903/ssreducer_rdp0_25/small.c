
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
static int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
{}

static int8_t
(safe_sub_func_int8_t_s_s)(  )
{}



static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1  )
{
 
  return






    si1 * ((int16_t)1);
}

static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1  )
{}

static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left  )
{}

static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}



static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1  )
{}

static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1  )
{}

static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}



static uint16_t
(safe_add_func_uint16_t_u_u)(  )
{}

static uint16_t
(safe_lshift_func_uint16_t_u_s)(  )
{}

static uint16_t
(safe_rshift_func_uint16_t_u_u)( unsigned int right )
{}



static uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{}

static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{}

static uint32_t
(safe_div_func_uint32_t_u_u)(uint32_t ui1  )
{}

static uint32_t
(safe_lshift_func_uint32_t_u_s)(  )
{}


struct S0 {
   int8_t f0;
   int8_t f1;
   uint32_t f2;
   int32_t f3;
   uint16_t f4;
};


static int32_t g_3 = 0x9BA095A9L;
static int32_t g_4[10][4][2] = {{{0xD4A0D461L,0xFC3A065CL},{1L,0xD4A0D461L},{0x8DC5336DL,0x8DC5336DL},{0x8DC5336DL,0xD4A0D461L}},{{1L,0xFC3A065CL},{0xD4A0D461L,0xFC3A065CL},{1L,0xD4A0D461L},{0x8DC5336DL,0x8DC5336DL}},{{0x8DC5336DL,0xD4A0D461L},{1L,0xFC3A065CL},{0xD4A0D461L,0xFC3A065CL},{1L,0xD4A0D461L}},{{0x8DC5336DL,0x8DC5336DL},{0x8DC5336DL,0xD4A0D461L},{1L,0xFC3A065CL},{0xD4A0D461L,0xFC3A065CL}},{{1L,0xD4A0D461L},{0x8DC5336DL,0x8DC5336DL},{0x8DC5336DL,0xD4A0D461L},{1L,0xFC3A065CL}},{{0xD4A0D461L,0xFC3A065CL},{1L,0xD4A0D461L},{0x8DC5336DL,0x8DC5336DL},{0xD4A0D461L,1L}},{{0xC8F0D071L,0x8DC5336DL},{1L,0x8DC5336DL},{0xC8F0D071L,1L},{0xD4A0D461L,0xD4A0D461L}},{{0xD4A0D461L,1L},{0xC8F0D071L,0x8DC5336DL},{1L,0x8DC5336DL},{0xC8F0D071L,1L}},{{0xD4A0D461L,0xD4A0D461L},{0xD4A0D461L,1L},{0xC8F0D071L,0x8DC5336DL},{1L,0x8DC5336DL}},{{0xC8F0D071L,1L},{0xD4A0D461L,0xD4A0D461L},{0xD4A0D461L,1L},{0xC8F0D071L,0x8DC5336DL}}};
static int32_t g_5[3] = {0xB2C41AC3L,0xB2C41AC3L,0xB2C41AC3L};
static uint32_t g_23[3] = {0x69C1477AL,0x69C1477AL,0x69C1477AL};
static int8_t g_26 = 4L;
static uint16_t g_32 = 0xB7A2L;
static int32_t g_57 = 0xEB039226L;
static int32_t g_58 = 4L;
static int32_t g_80 = 0xD47B9DA0L;
static uint32_t g_81[4] = {0xFACDC9FFL,0xFACDC9FFL,0xFACDC9FFL,0xFACDC9FFL};
static struct S0 g_152[2] = {{0x6EL,1L,0UL,0x4AB730D5L,0UL},{0x6EL,1L,0UL,0x4AB730D5L,0UL}};
static uint16_t g_203[3] = {0x582DL,0x582DL,0x582DL};
static int16_t g_277 = 1L;
static struct S0 g_283 = {0xB0L,-1L,0xF2B8033DL,0x5451DF1BL,0x022DL};



static struct S0 func_1();
static int32_t func_17(  uint8_t p_20 );
static uint8_t func_72(struct S0 p_73  );
static struct S0 func_76( int16_t p_78 );
static uint8_t func_99(uint32_t p_100);
static uint32_t func_105( int16_t p_107);
static int16_t func_121(uint16_t p_122 );
static uint16_t func_124(struct S0 p_125   );
static struct S0 func_129( struct S0 p_131, uint32_t p_132, int16_t p_133);
static struct S0 func_1()
{
    int16_t l_2[10][2] = {{4L,0x3367L},{4L,0x5ED9L},{1L,1L},{0x5ED9L,4L},{0x3367L,4L},{0x5ED9L,1L},{1L,0x5ED9L},{4L,0x3367L},{4L,0x5ED9L},{1L,1L}};
    int32_t l_34 = 0x08FBDEDBL;
    for (; (g_3 >= 0); )
    {
        for (; (g_4[7][0][1] >= 0); )
        {
            if (((((uint16_t)1)) < ((0x1A0B5C90L > ((uint16_t)1)) ^ ((uint32_t)1))))
            {
                }
            else
            {



                for (; (g_283.f3 <= 26); )
                {


if ((((safe_sub_func_int8_t_s_s( )) | 253UL) >= 0x6CL))
                    {



                        }
                    else
                    {

{
        for (; (g_4[7][0][1] >= 0); )
        {
            for (; (g_5[2] >= 0); )
            {
                if (func_17(  l_2[(g_5[2] + 6)][g_5[2]] ))
                {
                    if ((safe_lshift_func_uint16_t_u_s( )))
                    {
                        l_34 = (func_72(func_76( (g_81[2] |= (g_80 ^= g_32)) )  ) <= 0xB7L);
                    }
                    else;
                    }
                else;
                };
            };
        }





}


                };
{
        for (; (g_4[7][0][1] >= 0); )
        {
            for (; (g_5[2] >= 0); )
            {
                if (func_17(  l_2[(g_5[2] + 6)][g_5[2]] ))
                {
                    if ((safe_lshift_func_uint16_t_u_s( )))
                    {
                        l_34 = (func_72(func_76( (g_81[2] |= (g_80 ^= g_32)) )  ) <= 0xB7L);
                    }
                    else;
                    }
                else;
                };
            };
        }



            }
        };
        };
    }







static int32_t func_17(  uint8_t p_20 )
{
    (g_23[2] = p_20);
    }







static uint8_t func_72(struct S0 p_73  )
{}







static struct S0 func_76( int16_t p_78 )
{


{
    g_152[0].f3 = ((safe_sub_func_uint32_t_u_u((func_17(  func_99((p_78 >= (((uint8_t)1)))) ) >= 1L), ((int32_t)1))));
    }


    }







static uint8_t func_99(uint32_t p_100)
{
    uint8_t l_110[7][7] = {{0xFFL,0x31L,0xFFL,0x31L,0xFFL,0x31L,0xFFL},{0x78L,0x78L,0x27L,0x27L,0x78L,0x78L,0x27L},{255UL,0x31L,255UL,0x31L,255UL,0x31L,255UL},{0x78L,0x27L,0x27L,0x78L,0x78L,0x27L,0x27L},{0xFFL,0x31L,0xFFL,0x31L,0xFFL,0x31L,0xFFL},{0x78L,0x78L,0x27L,0x27L,0x78L,0x78L,0x27L},{255UL,0x31L,255UL,0x31L,255UL,0x31L,255UL}};
    struct S0 l_147 = {-5L,0L,0xB65799C7L,0x5F5692BDL,65528UL};


if (((~func_105( (((safe_div_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_s(l_110[5][6], 2)) | p_100) < (safe_lshift_func_int16_t_s_s((func_121((g_203[2] = func_124(func_129( l_147, ((uint32_t)1), l_110[0][0])   )) )) ))) != l_147.f4) )) | ((uint8_t)1)) | g_4[7][0][1]))) == p_100))
    {




}
    else;





}







static uint32_t func_105( int16_t p_107)
{}







static int16_t func_121(uint16_t p_122 )
{}







static uint16_t func_124(struct S0 p_125   )
{}







static struct S0 func_129( struct S0 p_131, uint32_t p_132, int16_t p_133)
{
    struct S0 l_151 = {0x15L,-5L,0UL,1L,0xBB46L};
    int32_t l_195 = 0x2C72D125L;


for (; (p_132 <= 39); ++p_132)
    {
        int32_t l_164 = (-2L);
        for (; (p_131.f0 <= 2); p_131.f0 += 1)
        {
            if (((g_23[p_131.f0] < (safe_lshift_func_int16_t_s_u((((l_151.f0 ^ (safe_mod_func_int16_t_s_s(0x58C3L ))) & (l_164 = ((int8_t)1))) | p_133), 12))) ^ l_151.f1))
            {
                if ((!g_152[0].f0))
                {
                    }
                else
                {
                    g_80 = (+((safe_mul_func_int16_t_s_s(((((l_164 ^ ((g_58 | ((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u( ((((uint32_t)1) != (g_57 == (((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint32_t_u_u(g_4[7][0][1], (safe_unary_minus_func_int8_t_s(((l_195 = (safe_mul_func_int16_t_s_s((((((safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((g_152[0].f3 |= (safe_add_func_uint16_t_u_u( ))), 0xBCA6F5D4L)), 2)) && 0xC7L) && 0xC0AAL) && p_131.f1) | g_23[1]) ))) != g_23[2]))))))) )) || 255UL) | 1UL))) > g_152[0].f0))) && 0L) )) )) == 0xF4L)) < 0x12L)) ^ g_57) <= ((uint32_t)1)) == (-10L)) )) < p_131.f1));
                    }
                }
            else;
        }
    }


    for (; (l_195 <= 3); )
    {


for (p_132 = 0; (p_132 <= 39); ++p_132)
    {
        int32_t l_164 = (-2L);
        for (p_131.f0 = 0; (p_131.f0 <= 2); p_131.f0 += 1)
        {
            g_152[0] = l_151;
            l_151.f3 = g_81[p_131.f0];
            if (((g_23[p_131.f0] < (safe_lshift_func_int16_t_s_u((((l_151.f0 ^ (safe_mod_func_int16_t_s_s(0x58C3L ))) & (l_164 = ((int8_t)1))) | p_133), 12))) ^ l_151.f1))
            {
                struct S0 l_196 = {1L,0x8BL,0x6BBBDF83L,5L,0xEF4FL};
                if ((!g_152[0].f0))
                {
                    }
                else
                {
                    g_80 = (+((safe_mul_func_int16_t_s_s(((((l_164 ^ ((g_58 | ((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u( ((((uint32_t)1) != (g_57 == (((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint32_t_u_u(g_4[7][0][1], (safe_unary_minus_func_int8_t_s(((l_195 = (safe_mul_func_int16_t_s_s((((((safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((g_152[0].f3 |= (safe_add_func_uint16_t_u_u( ))), 0xBCA6F5D4L)), 2)) && 0xC7L) && 0xC0AAL) && p_131.f1) | g_23[1]) ))) != g_23[2]))))))) )) || 255UL) | 1UL))) > g_152[0].f0))) && 0L) )) )) == 0xF4L)) < 0x12L)) ^ g_57) <= ((uint32_t)1)) == (-10L)) )) < p_131.f1));
                    for (; (l_164 <= 2); l_164 += 1)
                    {
                        g_152[0] = l_196;
                        g_203[2]++;
                    }
                }
                }
            else;
        }
    }


    };



    return p_131;
}





int main ( )
{
    func_1();
    }
