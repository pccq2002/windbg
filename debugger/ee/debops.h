

//#ifndef _debops_h_
//#define _debops_h_


#define OP_endofargs 0 // ??

#define OP_ident 1  //
#define OP_grouped 2   //
#define OP_hsym 3 //


#define OP_bang 39 //



#define OP_typestr 46 //
#define OP_const 47 // 20

#define OP_parent 52 // 
#define OP_lparen 53 //
#define OP_rparen 54  //
#define OP_lcurly 55     //

#define OP_fetch 59   // ??
#define OP_uplus 60   // ??
#define OP_negate 61  // ??
#define OP_addrof 62  // ??
#define OP_sizeof 63  //
#define OP_incr 64      //
#define OP_decr 65 //

#define OP_eq 106 //

#define OP_postinc 68 //

#define OP_uscope 70 //??
#define OP_by 85   //
#define OP_wo 72   //
#define OP_dw 73   //
#define OP_context 74 //
#define OP_function 75    //
#define OP_cast 76  //
#define OP_arg 77       //
#define OP_bscope 78 // ??
#define OP_fcnend 79   //

#define OP_lbrack 80 //
#define OP_pointsto 82   //
#define OP_dot 83  //

#define OP_pmember 86   //??
#define OP_dotmember 87 //??

#define OP_minus 92 // !!

#define OP_mult 88 // ??
#define OP_plus 91 // !!

#define OP_lt 95 //
#define OP_gt 97 //

#define OP_and 101    // ??

#define OP_lowprec 117 //
#define OP_comma 118   //

#define OP_postdec 69  // !
#define OP_predec 67  // 85

#define OP_execontext 204 // 取缔这个定义了

#define OP_shleq 26
#define OP_this 22

#define OP_retval 24
#define OP_shl 27
#define OP_minuseq 28




#define OP_bangeq 31

#define OP_multeq 33

#define OP_andandb 35
#define OP_andeq 36

#define OP_diveq 38
#define OP_div 42
#define OP_modeq 40
#define OP_pluseq 41

#define OP_lteq 44

#define OP_gteq 46

#define OP_eqeq 48

#define OP_xoreq 50
#define OP_xor 51
#define OP_oror 52
#define OP_baseptr 53
#define OP_segop 54
#define OP_tilde 55


#define OP_rbrack 60
#define OP_shreq 84
#define OP_shr 63
#define OP_andand 64
#define OP_mod 65
#define OP_oreq 66
#define OP_or 67
#define OP_rcurly 68




#define OPC_integral 72
#define OPC_scalar 73
#define OPC_arith 74
#define OPC_ptr 75
#define OPC_ptrint 76
#define OPC_relat 77
#define OPC_equiv 78
#define OPC_plus 79
#define OPC_minus 80

#define OP_preinc 83





#define OP_thisconst 91
#define OP_thisinit 92

#define OP_Oincrement  93
#define OP_Odecrement  96
#define OP_Ofunction   97
#define OP_Oarray      98
#define OP_Opmember    99
#define OP_Ostar       100
#define OP_Odivide     101
#define OP_Opercent    102
#define OP_Oplus       103
#define OP_Ominus      104
#define OP_Oshl        105
#define OP_Oshr        106
#define OP_Oless       107
#define OP_Olessequal  108
#define OP_Ogreater    109
#define OP_Ogreatequal 200
#define OP_Oequalequal 201
#define OP_Obangequal  202
#define OP_Oand        203
#define OP_Oxor        204
#define OP_Oor         205
#define OP_Oandand     206
#define OP_Ooror       207
#define OP_Oequal      208
#define OP_Otimesequal 209
#define OP_Odivequal   210
#define OP_Opcentequal 211
#define OP_Oplusequal  212
#define OP_Ominusequal 213
#define OP_Oleftequal  214
#define OP_Orightequal 215
#define OP_Oandequal   216
#define OP_Oxorequal   217
#define OP_Oorequal    218
#define OP_Ocomma      219
#define OP_noop        220
#define OP_Obang       221
#define OP_Otilde      222
#define OP_Odelete     223
#define OP_thisexpr    224


#define OPC_null 81



#define COPS_EXPR 120

#ifdef MyOPDAT

BindError,
BindSymbol,
BindError,
BindSymbol,
BindRetVal,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindSymbol,
BindTRUE,
BindConst,
BindError,
BindError,
BindError,
BindError,
BindError,
BindError,
BindError,
BindError,
BindError,
BindBang,
BindUnary,
BindUnary,
BindUnary,
BindFetch,
BindAddrOf,
BindSizeOf,
BindError,
BindError,
BindPreIncDec,
BindPreIncDec,
BindPreIncDec,
BindPreIncDec,
BindUScope,
BindByteOps,
BindByteOps,
BindByteOps,
BindContext,
BindFunction,
BindCast,
BindError,
BindBScope,
BindError,
BindArray,
BindError,
BindPointsTo,
BindDot,
BindSegOp,
BindSegOp,
BindPMember,
BindPMember,
BindBinary,
BindBinary,
BindBinary,
BindPlusMinus,
BindPlusMinus,
BindBinary,
BindBinary,
BindRelat,
BindRelat,
BindRelat,
BindRelat,
BindRelat,
BindRelat,
BindBinary,
BindBinary,
BindBinary,
BindBinary,
BindBinary,
BindAssign,
BindAssign,
BindAssign,
BindAssign,
BindAssign,
BindAssign,
BindAssign,
BindAssign,
BindAssign,
BindAssign,
BindAssign,
BindError,
BindError
#endif

#ifdef MyOPDAT_EVAL

(PFN_Eval)BindError,
EvalPushNode,
(PFN_Eval)BindError,
EvalPushNode,
EvalRetVal,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
EvalPushNode,
(PFN_Eval)BindError,
EvalPushNode,
EvalThisInit,
EvalThisConst,
EvalThisExpr,
EvalLChild,
EvalParent,
(PFN_Eval)BindError,
(PFN_Eval)BindError,
(PFN_Eval)BindError,
(PFN_Eval)BindError,
EvalBang,
EvalUnary,
EvalUnary,
EvalUnary,
EvalFetch,
EvalAddrOf,
EvalPushNode,
(PFN_Eval)BindError,
(PFN_Eval)BindError,
EvalPreIncDec,
EvalPreIncDec,
EvalPostIncDec,
EvalPostIncDec,
EvalUScope,
EvalByteOps,
EvalByteOps,
EvalByteOps,
EvalContext,
EvalFunction,
EvalCast,
(PFN_Eval)BindError,
EvalBScope,
(PFN_Eval)BindError,
EvalArray,
(PFN_Eval)BindError,
EvalPointsTo,
EvalDot,
EvalSegOp,
EvalSegOp,
(PFN_Eval)BindPMember,
(PFN_Eval)BindPMember,
EvalBinary,
EvalBinary,
EvalBinary,
EvalPlusMinus,
EvalPlusMinus,
EvalBinary,
EvalBinary,
EvalRelat,
EvalRelat,
EvalRelat,
EvalRelat,
EvalRelat,
EvalRelat,
EvalBinary,
EvalBinary,
EvalBinary,
EvalLogical,
EvalLogical,
EvalAssign,
EvalAssign,
EvalAssign,
EvalAssign,
EvalAssign,
EvalAssign,
EvalAssign,
EvalAssign,
EvalAssign,
EvalAssign,
EvalAssign,
(PFN_Eval)BindError,
(PFN_Eval)BindError,

#endif

//#endif