
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
static int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
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
   int32_t f3;
   uint16_t f4;
};


static int32_t g_4[10][4][2] = {{{0xD4A0D461L,0xFC3A065CL},{1L,0xD4A0D461L},{0x8DC5336DL,0x8DC5336DL},{0x8DC5336DL,0xD4A0D461L}},{{1L,0xFC3A065CL},{0xD4A0D461L,0xFC3A065CL},{1L,0xD4A0D461L},{0x8DC5336DL,0x8DC5336DL}},{{0x8DC5336DL,0xD4A0D461L},{1L,0xFC3A065CL},{0xD4A0D461L,0xFC3A065CL},{1L,0xD4A0D461L}},{{0x8DC5336DL,0x8DC5336DL},{0x8DC5336DL,0xD4A0D461L},{1L,0xFC3A065CL},{0xD4A0D461L,0xFC3A065CL}},{{1L,0xD4A0D461L},{0x8DC5336DL,0x8DC5336DL},{0x8DC5336DL,0xD4A0D461L},{1L,0xFC3A065CL}},{{0xD4A0D461L,0xFC3A065CL},{1L,0xD4A0D461L},{0x8DC5336DL,0x8DC5336DL},{0xD4A0D461L,1L}},{{0xC8F0D071L,0x8DC5336DL},{1L,0x8DC5336DL},{0xC8F0D071L,1L},{0xD4A0D461L,0xD4A0D461L}},{{0xD4A0D461L,1L},{0xC8F0D071L,0x8DC5336DL},{1L,0x8DC5336DL},{0xC8F0D071L,1L}},{{0xD4A0D461L,0xD4A0D461L},{0xD4A0D461L,1L},{0xC8F0D071L,0x8DC5336DL},{1L,0x8DC5336DL}},{{0xC8F0D071L,1L},{0xD4A0D461L,0xD4A0D461L},{0xD4A0D461L,1L},{0xC8F0D071L,0x8DC5336DL}}};
static uint32_t g_23[3] = {0x69C1477AL,0x69C1477AL,0x69C1477AL};
static int32_t g_80 = 0xD47B9DA0L;
static uint32_t g_81[4] = {0xFACDC9FFL,0xFACDC9FFL,0xFACDC9FFL,0xFACDC9FFL};
static struct S0 g_152[2] = {{0x6EL,1L,0UL,0x4AB730D5L,0UL},{0x6EL,1L,0UL,0x4AB730D5L,0UL}};
static uint16_t g_203[3] = {0x582DL,0x582DL,0x582DL};



static struct S0 func_1();
static int32_t func_17(  uint8_t p_20 );
static uint8_t func_72(struct S0 p_73  );
static struct S0 func_76(  );
static uint8_t func_99();
static uint32_t func_105( int16_t p_107);
static int16_t func_121(uint16_t p_122 );
static uint16_t func_124(struct S0 p_125   );
static struct S0 func_129( struct S0 p_131, uint32_t p_132, int16_t p_133);
static struct S0 func_1()
{
    for (; (((int32_t)1) >= 0); )
    {
        for (; (g_4[7][0][1] >= 0); )
        {
            if (((((uint16_t)1)) < ((0x1A0B5C90L > ((uint16_t)1)) ^ ((uint32_t)1))))
            {
                }
            else
            {



                {
        for (; (g_4[7][0][1] >= 0); )
        {
            for (; (((int32_t)1) >= 0); )
            {
                if (func_17(  ((int16_t)1) ))
                {
                    if ((((uint16_t)1)))
                    {
                        (func_72(func_76(  )  ) <= 0xB7L);
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







static struct S0 func_76(  )
{


{
    g_152[0].f3 = ((safe_sub_func_uint32_t_u_u((func_17(  func_99() ) >= 1L), ((int32_t)1))));
    }


    }







static uint8_t func_99()
{
    struct S0 l_147 = {-5L,0L,0xB65799C7L,0x5F5692BDL,65528UL};


if (((~func_105( (((safe_div_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_s(((uint8_t)1), 2)) | ((uint32_t)1)) < (safe_lshift_func_int16_t_s_s((func_121((g_203[2] = func_124(func_129( l_147, ((uint32_t)1), ((uint8_t)1))   )) )) ))) != l_147.f4) )) | ((uint8_t)1)) | g_4[7][0][1]))) == ((uint32_t)1)))
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
                    g_80 = (+((safe_mul_func_int16_t_s_s(((((l_164 ^ ((((int32_t)1) | ((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u( ((((uint32_t)1) != (((int32_t)1) == (((safe_add_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint32_t_u_u(g_4[7][0][1], (safe_unary_minus_func_int8_t_s(((l_195 = (safe_mul_func_int16_t_s_s((((((safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((g_152[0].f3 |= (((uint16_t)1))), 0xBCA6F5D4L)), 2)) && 0xC7L) && 0xC0AAL) && p_131.f1) | g_23[1]) ))) != g_23[2]))))))) )) || 255UL) | 1UL))) > g_152[0].f0))) && 0L) )) )) == 0xF4L)) < 0x12L)) ^ ((int32_t)1)) <= ((uint32_t)1)) == (-10L)) )) < p_131.f1));
                    for (l_164 = 0; (l_164 <= 2); l_164 += 1)
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
