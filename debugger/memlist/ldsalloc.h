
#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void FAR * LDSFmalloc (size_t);
void FAR * LDSFrealloc (void FAR * buffer, size_t size);
void FAR  LDSFfree (void FAR *);
void  LDSFinit ();

BOOL      BMInit ( VOID );
LPVOID    BMLock ( HMEM hv );
VOID      BMUnlock ( HMEM hv );
BOOL      BMIsLocked ( HMEM hv );
VOID      BMFree ( HMEM hv );
HMEM      BMFindAvail ( void );


#ifdef __cplusplus
};
#endif // __cplusplus
