
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;

static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left  )
{
 
  return

    ((left < 0) || (((int)((int)1)) < 0) || (((int)((int)1)) >= 32) || (left > ((127) >> ((int)((int)1))))) ?
    ((left)) :

    (left << ((int)((int)1)));
}

static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left  )
{
 
  return

    ((left < 0) || (((unsigned int)((unsigned int)1)) >= 32) || (left > ((127) >> ((unsigned int)((unsigned int)1))))) ?
    ((left)) :

    (left << ((unsigned int)((unsigned int)1)));
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
(safe_div_func_int16_t_s_s)(int16_t si1  )
{
 
  return

    ((((int16_t)1) == 0) || ((si1 == (-32767-1)) && (((int16_t)1) == (-1)))) ?
    ((si1)) :

    (si1 / ((int16_t)1));
}

static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left  )
{
 
  return

    ((left < 0) || (((int)((int)1)) < 0) || (((int)((int)1)) >= 32))?
    ((left)) :

    (left >> ((int)((int)1)));
}



static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1  )
{
 
  return


    (((si1^((int32_t)1)) & (((si1 ^ ((si1^((int32_t)1)) & (~(2147483647))))-((int32_t)1))^((int32_t)1))) < 0) ?
    ((si1)) :


    (si1 - ((int32_t)1));
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
(safe_lshift_func_uint8_t_u_u)(uint8_t left  )
{
 
  return

    ((((unsigned int)((unsigned int)1)) >= 32) || (left > ((255) >> ((unsigned int)((unsigned int)1))))) ?
    ((left)) :

    (left << ((unsigned int)((unsigned int)1)));
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




static int32_t g_1600 = 0L;



static int32_t func_1();
static int32_t func_8(uint16_t p_9  );
static int8_t func_29(int32_t p_30  );
static uint32_t func_42(uint32_t p_43 );
static int16_t func_48( const uint16_t p_50  );
static uint16_t func_55(int8_t p_56  );
static int16_t func_75(uint32_t p_76);
static const uint8_t func_81(const uint32_t p_82);
static int16_t func_89(    int32_t p_94);
static uint32_t func_97( uint16_t p_99, uint16_t p_100, uint32_t p_101 );
static int32_t func_1()
{

(safe_sub_func_int32_t_s_s(func_8((((uint8_t)1))  ) ));
    g_1600 |= (((uint8_t)1));
    }







static int32_t func_8(uint16_t p_9  )
{
    (((((safe_lshift_func_int8_t_s_u(func_29(((safe_rshift_func_int8_t_s_u(((((uint8_t)1)) & (safe_div_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((+((((int32_t)1) > func_42(((int32_t)1) )) | (safe_rshift_func_int16_t_s_s(func_48( ((safe_add_func_uint16_t_u_u(func_55((safe_sub_func_int32_t_s_s((+(((int32_t)1))) ))  ) )) || ((uint16_t)1))  ) )))) )) ))) )) >= ((const int16_t)1))  ) )) && ((int32_t)1)) | ((uint32_t)1)) == 8UL) & p_9);
    return ((int32_t)1);
}







static int8_t func_29(int32_t p_30  )
{
    return ((int32_t)1);
}







static uint32_t func_42(uint32_t p_43 )
{
    return ((int32_t)1);
}







static int16_t func_48( const uint16_t p_50  )
{
    return ((int32_t)1);
}







static uint16_t func_55(int8_t p_56  )
{
    if (((int32_t)1))
    {
        if ((((safe_sub_func_int32_t_s_s((((((int8_t)1)) <= (safe_lshift_func_int8_t_s_s((func_75((safe_lshift_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u(((func_81(((((safe_add_func_uint16_t_u_u(((int32_t)1) )) < (func_89(    p_56) && ((int32_t)1))) != ((int32_t)1)) != ((uint32_t)1))) <= ((const uint16_t)1)) <= 0x25B967A1L) )) < 0UL) != 0x6224ACA1L) ^ ((int32_t)1)) ))) != ((uint32_t)1)) ))) != p_56) )) | p_56) || ((int16_t)1)))
        {
            }
        else;
        for (; (((int32_t)1) <= 8); )
        {
            for (; (((int32_t)1) <= 4); )
            {

return p_56;
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







static int16_t func_89(    int32_t p_94)
{
    int32_t l_103 = (-7L);
    if ((safe_lshift_func_int8_t_s_u(((func_42(func_97( (((uint8_t)1)), l_103, ((int32_t)1) ) ) != 0xF5C60D0FL) | 4294967286UL) )))
    {
        for (; (((uint16_t)1) <= 59); )
        {
            for (; (((int8_t)1) >= 0); )
            {
                for (; (((uint8_t)1) <= 1); )
                {
                    if ((((1UL | ((uint16_t)1)) >= (((int16_t)1))) < ((int32_t)1)))
                    {
                        }
                    else
                    {
                        return ((uint16_t)1);
                    }
                    };
                };
        };
        }
    else;
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
    return ((int32_t)1);
}





int main ()
{
    func_1();

}
