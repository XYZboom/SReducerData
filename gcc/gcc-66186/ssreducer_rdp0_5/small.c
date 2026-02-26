
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;

static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

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
{
 
  return

    ((left < 0) || (((unsigned int)((unsigned int)1)) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)((unsigned int)1)));
}



static int16_t
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
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
(safe_mod_func_uint8_t_u_u)(uint8_t ui1  )
{
 
  return

    (((uint8_t)1) == 0) ?
    ((ui1)) :

    (ui1 % ((uint8_t)1));
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
(safe_rshift_func_uint8_t_u_u)(  )
{
 
  return

    (((unsigned int)((unsigned int)1)) >= 32) ?
    ((((uint8_t)1))) :

    (((uint8_t)1) >> ((unsigned int)((unsigned int)1)));
}



static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1  )
{
 
  return ui1 + ((uint16_t)1);
}



static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1  )
{
 
  return ui1 - ((uint32_t)1);
}




static int32_t g_2 = 1L;
static int8_t g_264 = 0x7AL;
static int32_t g_1600 = 0L;



static int32_t func_1();
static int32_t func_8(  uint16_t p_11);
static int8_t func_29(int32_t p_30  );
static uint32_t func_42(uint32_t p_43 );
static int16_t func_48( const uint16_t p_50  );
static uint16_t func_55(int8_t p_56, const uint16_t p_57 );
static int16_t func_75(uint32_t p_76);
static const uint8_t func_81(const uint32_t p_82);
static int16_t func_89( const int8_t p_91 , uint16_t p_93 );
static uint32_t func_97( uint16_t p_99, uint16_t p_100, uint32_t p_101 );
static int32_t func_1()
{

(safe_sub_func_int32_t_s_s(func_8(  g_2), ((int32_t)1)));
    }







static int32_t func_8(  uint16_t p_11)
{
    (((((safe_lshift_func_int8_t_s_u(func_29(((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u( )) & (safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((+((g_2 > func_42(g_2 )) | (safe_rshift_func_int16_t_s_s(func_48( ((safe_add_func_uint16_t_u_u(func_55((safe_sub_func_int32_t_s_s((+(((int32_t)1))), ((int32_t)1))), ((int32_t)1) ) )) || p_11)  ), ((uint16_t)1))))) )), p_11))) )) >= ((const int16_t)1))  ), 5)) && ((int32_t)1)) | ((uint32_t)1)) == 8UL) & ((uint16_t)1));
    return ((int32_t)1);
}







static int8_t func_29(int32_t p_30  )
{
    for (; (g_264 < (-25)); )
    {
        for (; (g_2 >= 29); )
        {



g_1600 = (g_1600 && ((int32_t)1));
        };
    };
    return ((int32_t)1);
}







static uint32_t func_42(uint32_t p_43 )
{
    return g_2;
}







static int16_t func_48( const uint16_t p_50  )
{
    return ((int32_t)1);
}







static uint16_t func_55(int8_t p_56, const uint16_t p_57 )
{
    if (g_2)
    {
        int32_t l_88[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_88[i] = 0xFBC07B36L;
        if ((((safe_sub_func_int32_t_s_s((((((int8_t)1)) <= (safe_lshift_func_int8_t_s_s((func_75((safe_lshift_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u(((func_81(((((safe_add_func_uint16_t_u_u(g_2 )) < (func_89( g_2 , ((uint32_t)1) ) && ((int32_t)1))) != l_88[3]) != ((uint32_t)1))) <= p_57) <= 0x25B967A1L) )) < 0UL) != 0x6224ACA1L) ^ g_2), 7))) != ((uint32_t)1)), l_88[1]))) != p_56), 1L)) | p_56) || ((int16_t)1)))
        {
            }
        else;
        for (; (((int32_t)1) <= 8); )
        {
            for (p_56 = 7; (p_56 >= 1); )
            {

if ((safe_rshift_func_uint8_t_u_u( )))
                {
                    }
                else
                {
                    if ((((int32_t)1) < 0x5D16L))
                    {
                        return ((uint32_t)1);
                    }
                    else;
                }
                };
            };
        }
    else;
    }







static int16_t func_75(uint32_t p_76)
{
    return ((int8_t)1);
}







static const uint8_t func_81(const uint32_t p_82)
{
    return ((int32_t)1);
}







static int16_t func_89( const int8_t p_91 , uint16_t p_93 )
{
    int32_t l_103 = (-7L);
    if ((safe_lshift_func_int8_t_s_u(((func_42(func_97( (((uint8_t)1)), l_103, g_2 ) ) != 0xF5C60D0FL) | 4294967286UL), l_103)))
    {
        }
    else;
    return ((int8_t)1);
}







static uint32_t func_97( uint16_t p_99, uint16_t p_100, uint32_t p_101 )
{
    int16_t l_125[8];
    int i;
    for (i = 0; i < 8; i++)
        l_125[i] = (-6L);
    for (; (p_99 <= 7); p_99 += 1)
    {
        for (p_101 = 0; (p_101 <= 7); )
        {
            if (( g_1600 < 0) )
{

{
        for (; (p_101 <= 7); p_101 += 1)
        {
            if (l_125[p_100])
                break;
        }
    }

}

if (l_125[p_99])
                break;
        };
    }
    return g_2;
}





int main ()
{
    func_1();

}
