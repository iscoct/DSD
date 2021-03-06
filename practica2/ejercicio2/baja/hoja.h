/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _HOJA_H_RPCGEN
#define _HOJA_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif

#define MAX_NOMBRE 256
#define MAX_IP 64

struct registro {
	char *nombre;
	char *ip;
};
typedef struct registro registro;

#define HOJA 0x20000001
#define PRIMERA 1

#if defined(__STDC__) || defined(__cplusplus)
#define baja 2
extern  char ** baja_1(registro *, CLIENT *);
extern  char ** baja_1_svc(registro *, struct svc_req *);
extern int hoja_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define baja 2
extern  char ** baja_1();
extern  char ** baja_1_svc();
extern int hoja_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_registro (XDR *, registro*);

#else /* K&R C */
extern bool_t xdr_registro ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_HOJA_H_RPCGEN */
