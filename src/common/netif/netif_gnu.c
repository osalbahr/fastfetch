#include "netif.h"
#include "common/io/io.h"
#include "util/mallocHelper.h"

#include <arpa/inet.h>
#include <net/if.h>

#define FF_STR_INDIR(x) #x
#define FF_STR(x) FF_STR_INDIR(x)

// TODO: implement
bool ffNetifGetDefaultRouteImplV4(FFNetifDefaultRouteResult* result)
{
    (void)result;
    return false;
}

// TODO: implement
bool ffNetifGetDefaultRouteImplV6(FFNetifDefaultRouteResult* result)
{
    (void)result;
    return false;
}
