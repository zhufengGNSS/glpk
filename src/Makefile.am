## Process this file with automake to produce Makefile.in ##

include_HEADERS = glpk.h

lib_LTLIBRARIES = libglpk.la

libglpk_la_CPPFLAGS = \
-I$(srcdir) \
-I$(srcdir)/amd \
-I$(srcdir)/bflib \
-I$(srcdir)/cglib \
-I$(srcdir)/colamd \
-I$(srcdir)/env \
-I$(srcdir)/minisat \
-I$(srcdir)/misc \
-I$(srcdir)/proxy \
-I$(srcdir)/simplex \
-I$(srcdir)/zlib

libglpk_la_LDFLAGS = \
-version-info 38:0:2 \
-export-symbols-regex '^glp_*' \
${NOUNDEFINED}

libglpk_la_SOURCES = \
avl.c \
bfd.c \
bfx.c \
glpapi01.c \
glpapi02.c \
glpapi03.c \
glpapi04.c \
glpapi05.c \
glpapi06.c \
glpapi07.c \
glpapi08.c \
glpapi09.c \
glpapi10.c \
glpapi11.c \
glpapi12.c \
glpapi13.c \
glpapi14.c \
glpapi15.c \
glpapi16.c \
glpapi17.c \
glpapi18.c \
glpapi19.c \
glpapi20.c \
glpapi21.c \
glpcpx.c \
glpdmx.c \
glpgmp.c \
glphbm.c \
glpini01.c \
glpini02.c \
glpios01.c \
glpios02.c \
glpios03.c \
glpios04.c \
glpios05.c \
glpios06.c \
glpios07.c \
glpios08.c \
glpios09.c \
glpios10.c \
glpios11.c \
glpios12.c \
glpipm.c \
glpmat.c \
glpmpl01.c \
glpmpl02.c \
glpmpl03.c \
glpmpl04.c \
glpmpl05.c \
glpmpl06.c \
glpmps.c \
glpnet03.c \
glpnet04.c \
glpnet05.c \
glpnpp01.c \
glpnpp02.c \
glpnpp03.c \
glpnpp04.c \
glpnpp05.c \
glpnpp06.c \
glprgr.c \
glpscl.c \
glpsdf.c \
glpspm.c \
glpsql.c \
glpssx01.c \
glpssx02.c \
lux.c \
amd/amd_1.c \
amd/amd_2.c \
amd/amd_aat.c \
amd/amd_control.c \
amd/amd_defaults.c \
amd/amd_dump.c \
amd/amd_info.c \
amd/amd_order.c \
amd/amd_post_tree.c \
amd/amd_postorder.c \
amd/amd_preprocess.c \
amd/amd_valid.c \
bflib/btf.c \
bflib/btfint.c \
bflib/fhv.c \
bflib/fhvint.c \
bflib/ifu.c \
bflib/luf.c \
bflib/lufint.c \
bflib/scf.c \
bflib/scfint.c \
bflib/sgf.c \
bflib/sva.c \
cglib/cfg.c \
cglib/cfg1.c \
colamd/colamd.c \
env/alloc.c \
env/dlsup.c \
env/env.c \
env/error.c \
env/stdout.c \
env/stream.c \
env/time.c \
env/tls.c \
minisat/minisat.c \
misc/bignum.c \
misc/dmp.c \
misc/ffalg.c \
misc/fp2rat.c \
misc/gcd.c \
misc/jd.c \
misc/keller.c \
misc/mc13d.c \
misc/mc21a.c \
misc/okalg.c \
misc/qmd.c \
misc/relax4.c \
misc/rng.c \
misc/rng1.c \
misc/round2n.c \
misc/str2int.c \
misc/str2num.c \
misc/strspx.c \
misc/strtrim.c \
misc/triang.c \
misc/wclique.c \
misc/wclique1.c \
proxy/proxy.c \
proxy/proxy1.c \
simplex/spxat.c \
simplex/spxchuzc.c \
simplex/spxchuzr.c \
simplex/spxlp.c \
simplex/spxnt.c \
simplex/spxprim.c \
simplex/spxprob.c \
simplex/spychuzc.c \
simplex/spychuzr.c \
simplex/spydual.c \
zlib/adler32.c \
zlib/compress.c \
zlib/crc32.c \
zlib/deflate.c \
zlib/gzclose.c \
zlib/gzlib.c \
zlib/gzread.c \
zlib/gzwrite.c \
zlib/inffast.c \
zlib/inflate.c \
zlib/inftrees.c \
zlib/trees.c \
zlib/uncompr.c \
zlib/zio.c \
zlib/zutil.c

## eof ##
