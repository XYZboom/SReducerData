
typedef int int32_t;
typedef unsigned char uint8_t;
static void ***
(safe_unary_minus_func_int8_t_s)(void *** si )
{}
static void ***
(safe_sub_func_int64_t_s_s)( void *** si2 )
{}
static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left  )
{
  return
    ((((int)((int)1)) < 0) || (((int)((int)1)) >= 32)) ?
    ((left)) :
    (left >> ((int)((int)1)));
}
static void ***
(safe_unary_minus_func_uint64_t_u)(void *** ui )
{}
static void ***
(safe_sub_func_uint64_t_u_u)(void *** ui1  )
{}
struct S0 {
   int32_t f6;
   };
static struct S0 g_20 = {0xD03BL,0x5AL,-1L,2UL,0L,-9L,0xCC5C6A3FL,0UL};
inline static uint8_t func_13();
inline static uint8_t func_65();
static void *** func_1()
{
    for (; (((int32_t)1) >= (-19)); )
    {
        if (((((((int32_t)1) == (!((uint8_t)1))) < ((safe_sub_func_int64_t_s_s( ((((func_13() <= ((int32_t)1)) > ((void ***)1)) , ((int32_t)1)) != 4UL))) <= ((void ***)1))) == ((void ***)1))))
        {
            }
        else;
        };
    }
inline static uint8_t func_13()
{
    safe_rshift_func_uint8_t_u_s(func_65() );
}
inline static uint8_t func_65()
{
    if (g_20.f6)
        goto lbl_93;
g_20.f6 += 1;
safe_unary_minus_func_int8_t_s(((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint64_t_u((((((int32_t)1) > ((void ***)1)) | (safe_rshift_func_uint8_t_u_s(func_65() ))) < ((int32_t)1)))) )) >= 0x2712L));
printf("index = [%d]\n", ((int)1));
{
    uint8_t l_1454 = 5UL;
return l_1454;
}
lbl_93:;
func_65();
return ((uint8_t)1);
}
int main ()
{
    func_1();
    }