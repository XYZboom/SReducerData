
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
(safe_lshift_func_int8_t_s_u)( unsigned int right )
{}



static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return






    si1 * si2;
}

static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
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

static uint8_t
(safe_rshift_func_uint8_t_u_s)(  )
{}



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
static uint8_t g_22 = 0x4CL;
static uint32_t g_23[3] = {0x69C1477AL,0x69C1477AL,0x69C1477AL};
static uint16_t g_32 = 0xB7A2L;
static uint8_t g_55[9][8] = {{252UL,255UL,0x79L,3UL,0x17L,3UL,0UL,255UL},{249UL,0UL,0xE3L,3UL,251UL,255UL,0UL,251UL},{0xD5L,251UL,247UL,0xD5L,249UL,255UL,0x5BL,252UL},{0UL,0xD5L,255UL,0UL,255UL,0xD5L,0UL,0x17L},{0x1CL,255UL,255UL,0x8AL,0x49L,4UL,0x8AL,0UL},{247UL,251UL,0xD5L,0x7EL,0x49L,0x5BL,0UL,0UL},{0x1CL,0x79L,0x7EL,0UL,255UL,3UL,251UL,0x5BL},{0UL,0x49L,255UL,249UL,249UL,255UL,0x49L,0UL},{0xD5L,3UL,0UL,0x17L,251UL,255UL,247UL,0x8AL}};
static int32_t g_57 = 0xEB039226L;
static int32_t g_58 = 4L;
static int32_t g_80 = 0xD47B9DA0L;
static uint32_t g_81[4] = {0xFACDC9FFL,0xFACDC9FFL,0xFACDC9FFL,0xFACDC9FFL};
static struct S0 g_152[2] = {{0x6EL,1L,0UL,0x4AB730D5L,0UL},{0x6EL,1L,0UL,0x4AB730D5L,0UL}};
static uint16_t g_203[3] = {0x582DL,0x582DL,0x582DL};
static int32_t g_621[2][9][5] = {{{(-10L),1L,0xD5EF2F06L,1L,(-10L)},{1L,1L,8L,(-10L),8L},{8L,8L,0xD5EF2F06L,(-10L),0x1E4228D9L},{1L,1L,1L,1L,8L},{1L,(-10L),(-4L),(-4L),(-10L)},{8L,1L,(-4L),0xD5EF2F06L,0xD5EF2F06L},{1L,8L,1L,(-4L),0xD5EF2F06L},{(-10L),1L,0xD5EF2F06L,1L,(-10L)},{1L,1L,8L,(-10L),8L}},{{8L,8L,0xD5EF2F06L,(-10L),0x1E4228D9L},{1L,1L,1L,1L,8L},{1L,(-4L),0xD5EF2F06L,0xD5EF2F06L,(-4L)},{0x1E4228D9L,(-10L),0xD5EF2F06L,8L,8L},{(-10L),0x1E4228D9L,(-10L),0xD5EF2F06L,8L},{(-4L),1L,8L,1L,(-4L)},{(-10L),1L,0x1E4228D9L,(-4L),0x1E4228D9L},{0x1E4228D9L,0x1E4228D9L,8L,(-4L),1L},{1L,(-10L),(-10L),1L,0x1E4228D9L}}};



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
            for (; (g_5[2] >= 0); )
            {
                {
                    if ((safe_lshift_func_uint16_t_u_s( )))
                    {
                        l_34 = (func_72(func_76( (g_81[2] |= (g_80 ^= g_32)) )  ) <= 0xB7L);
                    }
                    else;
                    }





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
                }


            };
            };
        };
    }







static int32_t func_17(  uint8_t p_20 )
{}







static uint8_t func_72(struct S0 p_73  )
{}







static struct S0 func_76( int16_t p_78 )
{
    int32_t l_98 = (-10L);


{
    g_152[0].f3 = (l_98 = (safe_sub_func_uint32_t_u_u((func_17(  func_99((p_78 >= (safe_rshift_func_uint8_t_u_s( )))) ) >= 1L), g_621[0][6][4])));
    }


    }







static uint8_t func_99(uint32_t p_100)
{
    uint8_t l_110[7][7] = {{0xFFL,0x31L,0xFFL,0x31L,0xFFL,0x31L,0xFFL},{0x78L,0x78L,0x27L,0x27L,0x78L,0x78L,0x27L},{255UL,0x31L,255UL,0x31L,255UL,0x31L,255UL},{0x78L,0x27L,0x27L,0x78L,0x78L,0x27L,0x27L},{0xFFL,0x31L,0xFFL,0x31L,0xFFL,0x31L,0xFFL},{0x78L,0x78L,0x27L,0x27L,0x78L,0x78L,0x27L},{255UL,0x31L,255UL,0x31L,255UL,0x31L,255UL}};
    int32_t l_144[2][9] = {{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)},{0L,0L,0L,0L,0L,0L,0L,0L,0L}};
    struct S0 l_147 = {-5L,0L,0xB65799C7L,0x5F5692BDL,65528UL};
    uint32_t l_148 = 4294967295UL;


if (((~func_105( (((safe_div_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_s(l_110[5][6], 2)) | p_100) < (safe_lshift_func_int16_t_s_s((l_144[0][0] = func_121((g_203[2] = func_124(func_129( l_147, l_148, l_110[0][0])   )) )) ))) != l_147.f4) )) | g_55[1][5]) | g_4[7][0][1]))) == p_100))
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


for (l_195 = 0; (l_195 <= 3); )
    {


for (p_132 = 0; (p_132 <= 39); ++p_132)
    {
        int32_t l_164 = (-2L);
        for (p_131.f0 = 0; (p_131.f0 <= 2); p_131.f0 += 1)
        {
            int8_t l_163[9][6] = {{0x75L,0x92L,0x92L,0x75L,0xC2L,(-7L)},{(-7L),0x75L,6L,0x75L,(-7L),1L},{0x75L,(-7L),1L,1L,(-7L),0x75L},{0x92L,0x75L,0xC2L,(-7L),0xC2L,0x75L},{0xC2L,0x92L,1L,6L,6L,1L},{0xC2L,0xC2L,6L,(-7L),0x46L,(-7L)},{0x92L,0xC2L,0x92L,1L,6L,6L},{0x75L,0x92L,0x92L,0x75L,0xC2L,(-7L)},{(-7L),0x75L,6L,0x75L,(-7L),1L}};
            struct S0 l_166 = {0L,0L,4UL,0L,0x9C02L};
            g_152[0] = l_151;
            l_151.f3 = g_81[p_131.f0];
            if (((g_23[p_131.f0] < (safe_lshift_func_int16_t_s_u((((l_151.f0 ^ (safe_mod_func_int16_t_s_s(0x58C3L, (safe_sub_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u( (--g_22))) <= 4UL) && (p_131.f4 = 0x517BL)) ))))) & (l_164 = l_163[1][3])) | p_133), 12))) ^ l_151.f1))
            {
                struct S0 l_196 = {1L,0x8BL,0x6BBBDF83L,5L,0xEF4FL};
                if ((!g_152[0].f0))
                {
                    }
                else
                {
                    uint32_t l_177 = 0xAEAE63DAL;
                    g_80 = (+((safe_mul_func_int16_t_s_s(((((l_164 ^ ((g_58 | ((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u( ((l_177 != (g_57 == (((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint32_t_u_u(g_4[7][0][1], (safe_unary_minus_func_int8_t_s(((l_195 = (safe_mul_func_int16_t_s_s((((((safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((g_152[0].f3 |= (safe_add_func_uint16_t_u_u( ))), 0xBCA6F5D4L)), 2)) && 0xC7L) && 0xC0AAL) && p_131.f1) | g_23[1]), g_152[0].f4))) != g_23[2]))))))) )) || 255UL) | 1UL))) > g_152[0].f0))) && 0L), l_151.f0)) )) == 0xF4L)) < 0x12L)) ^ g_57) <= l_166.f2) == (-10L)), (-1L))) < p_131.f1));
                    for (l_164 = 0; (l_164 <= 2); l_164 += 1)
                    {
                        g_152[0] = l_196;
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
