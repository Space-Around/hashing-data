
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 68 > 0
static unsigned char *bytecode_data[68];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___parents_main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_multiprocessing$$45$preLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$asn1schemas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$asn1schemas$cert$$45$dane$$45$hash(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$asn1schemas$cert$$45$selfsigned$$45$example(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$asn1schemas$cms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$asn1schemas$oids(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$asn1schemas$pfx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$asn1schemas$pkcs10(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$asn1schemas$prvkey(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$asn1schemas$x509(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$gost28147(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$gost28147_mac(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$gost3410(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$gost3410_vko(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$gost34112012(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$gost34112012256(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$gost34112012512(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$gost341194(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$gost3412(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$gost3413(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$iface(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$kdf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$mgm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$pbkdf2(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$test_cms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$test_gost28147(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$test_gost28147_mac(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$test_gost3410(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$test_gost3410_vko(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$test_gost34112012(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$test_gost341194(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$test_gost3412(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$test_gost3413(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$test_kdf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$test_mgm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$test_pfx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$test_wrap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$test_x509(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygost$wrap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_src(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_src$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_test(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/Desktop/sandbox/test/main.py"
#endif
},
    {"__parents_main__", modulecode___parents_main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/Desktop/sandbox/test/main.py"
#endif
},
    {"argparse", NULL, 0, 63715, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/argparse.py"
#endif
},
    {"asyncio", NULL, 1, 763, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/__init__.py"
#endif
},
    {"asyncio.base_events", NULL, 2, 52006, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/base_events.py"
#endif
},
    {"asyncio.base_futures", NULL, 3, 1892, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/base_futures.py"
#endif
},
    {"asyncio.base_subprocess", NULL, 4, 9394, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/base_subprocess.py"
#endif
},
    {"asyncio.base_tasks", NULL, 5, 1928, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/base_tasks.py"
#endif
},
    {"asyncio.constants", NULL, 6, 565, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/constants.py"
#endif
},
    {"asyncio.coroutines", NULL, 7, 6621, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/coroutines.py"
#endif
},
    {"asyncio.events", NULL, 8, 28085, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/events.py"
#endif
},
    {"asyncio.exceptions", NULL, 9, 2537, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/exceptions.py"
#endif
},
    {"asyncio.format_helpers", NULL, 10, 2308, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/format_helpers.py"
#endif
},
    {"asyncio.futures", NULL, 11, 11813, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/futures.py"
#endif
},
    {"asyncio.locks", NULL, 12, 14413, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/locks.py"
#endif
},
    {"asyncio.log", NULL, 13, 210, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/log.py"
#endif
},
    {"asyncio.protocols", NULL, 14, 8598, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/protocols.py"
#endif
},
    {"asyncio.queues", NULL, 15, 8500, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/queues.py"
#endif
},
    {"asyncio.runners", NULL, 16, 2190, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/runners.py"
#endif
},
    {"asyncio.selector_events", NULL, 17, 29815, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/selector_events.py"
#endif
},
    {"asyncio.sslproto", NULL, 18, 21540, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/sslproto.py"
#endif
},
    {"asyncio.staggered", NULL, 19, 4144, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/staggered.py"
#endif
},
    {"asyncio.streams", NULL, 20, 20570, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/streams.py"
#endif
},
    {"asyncio.subprocess", NULL, 21, 7318, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/subprocess.py"
#endif
},
    {"asyncio.tasks", NULL, 22, 24173, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/tasks.py"
#endif
},
    {"asyncio.threads", NULL, 23, 962, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/threads.py"
#endif
},
    {"asyncio.transports", NULL, 24, 12230, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/transports.py"
#endif
},
    {"asyncio.trsock", NULL, 25, 8553, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/trsock.py"
#endif
},
    {"asyncio.unix_events", NULL, 26, 42039, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/asyncio/unix_events.py"
#endif
},
    {"concurrent", NULL, 27, 116, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/concurrent/__init__.py"
#endif
},
    {"concurrent.futures", NULL, 28, 1092, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/concurrent/futures/__init__.py"
#endif
},
    {"concurrent.futures._base", NULL, 29, 22306, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/concurrent/futures/_base.py"
#endif
},
    {"concurrent.futures.process", NULL, 30, 20724, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/concurrent/futures/process.py"
#endif
},
    {"concurrent.futures.thread", NULL, 31, 5744, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/concurrent/futures/thread.py"
#endif
},
    {"config", modulecode_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/Desktop/sandbox/test/config.py"
#endif
},
    {"multiprocessing", NULL, 32, 636, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/__init__.py"
#endif
},
    {"multiprocessing-postLoad", modulecode_multiprocessing$$45$postLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/multiprocessing-postLoad.py"
#endif
},
    {"multiprocessing-preLoad", modulecode_multiprocessing$$45$preLoad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/multiprocessing-preLoad.py"
#endif
},
    {"multiprocessing.connection", NULL, 33, 25642, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/connection.py"
#endif
},
    {"multiprocessing.context", NULL, 34, 13002, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/context.py"
#endif
},
    {"multiprocessing.dummy", NULL, 35, 3847, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/dummy/__init__.py"
#endif
},
    {"multiprocessing.dummy.connection", NULL, 36, 2567, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/dummy/connection.py"
#endif
},
    {"multiprocessing.forkserver", NULL, 37, 8399, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/forkserver.py"
#endif
},
    {"multiprocessing.heap", NULL, 38, 7617, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/heap.py"
#endif
},
    {"multiprocessing.managers", NULL, 39, 40899, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/managers.py"
#endif
},
    {"multiprocessing.pool", NULL, 40, 25120, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/pool.py"
#endif
},
    {"multiprocessing.popen_fork", NULL, 41, 2494, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/popen_fork.py"
#endif
},
    {"multiprocessing.popen_forkserver", NULL, 42, 2427, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/popen_forkserver.py"
#endif
},
    {"multiprocessing.popen_spawn_posix", NULL, 43, 2330, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/popen_spawn_posix.py"
#endif
},
    {"multiprocessing.process", NULL, 44, 10991, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/process.py"
#endif
},
    {"multiprocessing.queues", NULL, 45, 10176, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/queues.py"
#endif
},
    {"multiprocessing.reduction", NULL, 46, 8267, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/reduction.py"
#endif
},
    {"multiprocessing.resource_sharer", NULL, 47, 5266, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/resource_sharer.py"
#endif
},
    {"multiprocessing.resource_tracker", NULL, 48, 5476, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/resource_tracker.py"
#endif
},
    {"multiprocessing.shared_memory", NULL, 49, 14424, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/shared_memory.py"
#endif
},
    {"multiprocessing.sharedctypes", NULL, 50, 7079, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/sharedctypes.py"
#endif
},
    {"multiprocessing.spawn", NULL, 51, 6703, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/spawn.py"
#endif
},
    {"multiprocessing.synchronize", NULL, 52, 11370, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/synchronize.py"
#endif
},
    {"multiprocessing.util", NULL, 53, 11489, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/multiprocessing/util.py"
#endif
},
    {"pygost", modulecode_pygost, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/__init__.py"
#endif
},
    {"pygost.asn1schemas", modulecode_pygost$asn1schemas, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/asn1schemas/__init__.py"
#endif
},
    {"pygost.asn1schemas.cert-dane-hash", modulecode_pygost$asn1schemas$cert$$45$dane$$45$hash, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/asn1schemas/cert-dane-hash.py"
#endif
},
    {"pygost.asn1schemas.cert-selfsigned-example", modulecode_pygost$asn1schemas$cert$$45$selfsigned$$45$example, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/asn1schemas/cert-selfsigned-example.py"
#endif
},
    {"pygost.asn1schemas.cms", modulecode_pygost$asn1schemas$cms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/asn1schemas/cms.py"
#endif
},
    {"pygost.asn1schemas.oids", modulecode_pygost$asn1schemas$oids, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/asn1schemas/oids.py"
#endif
},
    {"pygost.asn1schemas.pfx", modulecode_pygost$asn1schemas$pfx, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/asn1schemas/pfx.py"
#endif
},
    {"pygost.asn1schemas.pkcs10", modulecode_pygost$asn1schemas$pkcs10, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/asn1schemas/pkcs10.py"
#endif
},
    {"pygost.asn1schemas.prvkey", modulecode_pygost$asn1schemas$prvkey, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/asn1schemas/prvkey.py"
#endif
},
    {"pygost.asn1schemas.x509", modulecode_pygost$asn1schemas$x509, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/asn1schemas/x509.py"
#endif
},
    {"pygost.gost28147", modulecode_pygost$gost28147, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/gost28147.py"
#endif
},
    {"pygost.gost28147_mac", modulecode_pygost$gost28147_mac, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/gost28147_mac.py"
#endif
},
    {"pygost.gost3410", modulecode_pygost$gost3410, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/gost3410.py"
#endif
},
    {"pygost.gost3410_vko", modulecode_pygost$gost3410_vko, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/gost3410_vko.py"
#endif
},
    {"pygost.gost34112012", modulecode_pygost$gost34112012, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/gost34112012.py"
#endif
},
    {"pygost.gost34112012256", modulecode_pygost$gost34112012256, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/gost34112012256.py"
#endif
},
    {"pygost.gost34112012512", modulecode_pygost$gost34112012512, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/gost34112012512.py"
#endif
},
    {"pygost.gost341194", modulecode_pygost$gost341194, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/gost341194.py"
#endif
},
    {"pygost.gost3412", modulecode_pygost$gost3412, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/gost3412.py"
#endif
},
    {"pygost.gost3413", modulecode_pygost$gost3413, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/gost3413.py"
#endif
},
    {"pygost.iface", modulecode_pygost$iface, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/iface.py"
#endif
},
    {"pygost.kdf", modulecode_pygost$kdf, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/kdf.py"
#endif
},
    {"pygost.mgm", modulecode_pygost$mgm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/mgm.py"
#endif
},
    {"pygost.pbkdf2", modulecode_pygost$pbkdf2, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/pbkdf2.py"
#endif
},
    {"pygost.test_cms", modulecode_pygost$test_cms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/test_cms.py"
#endif
},
    {"pygost.test_gost28147", modulecode_pygost$test_gost28147, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/test_gost28147.py"
#endif
},
    {"pygost.test_gost28147_mac", modulecode_pygost$test_gost28147_mac, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/test_gost28147_mac.py"
#endif
},
    {"pygost.test_gost3410", modulecode_pygost$test_gost3410, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/test_gost3410.py"
#endif
},
    {"pygost.test_gost3410_vko", modulecode_pygost$test_gost3410_vko, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/test_gost3410_vko.py"
#endif
},
    {"pygost.test_gost34112012", modulecode_pygost$test_gost34112012, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/test_gost34112012.py"
#endif
},
    {"pygost.test_gost341194", modulecode_pygost$test_gost341194, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/test_gost341194.py"
#endif
},
    {"pygost.test_gost3412", modulecode_pygost$test_gost3412, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/test_gost3412.py"
#endif
},
    {"pygost.test_gost3413", modulecode_pygost$test_gost3413, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/test_gost3413.py"
#endif
},
    {"pygost.test_kdf", modulecode_pygost$test_kdf, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/test_kdf.py"
#endif
},
    {"pygost.test_mgm", modulecode_pygost$test_mgm, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/test_mgm.py"
#endif
},
    {"pygost.test_pfx", modulecode_pygost$test_pfx, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/test_pfx.py"
#endif
},
    {"pygost.test_wrap", modulecode_pygost$test_wrap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/test_wrap.py"
#endif
},
    {"pygost.test_x509", modulecode_pygost$test_x509, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/test_x509.py"
#endif
},
    {"pygost.utils", modulecode_pygost$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/utils.py"
#endif
},
    {"pygost.wrap", modulecode_pygost$wrap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/.local/lib/python3.9/site-packages/pygost/wrap.py"
#endif
},
    {"runpy", NULL, 54, 8491, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/runpy.py"
#endif
},
    {"site", NULL, 55, 17284, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/site.py"
#endif
},
    {"sitecustomize", NULL, 56, 202, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/sitecustomize.py"
#endif
},
    {"six", modulecode_six, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3/dist-packages/six.py"
#endif
},
    {"src", modulecode_src, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/Desktop/sandbox/test/src/__init__.py"
#endif
},
    {"src.utils", modulecode_src$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/Desktop/sandbox/test/src/utils.py"
#endif
},
    {"test", modulecode_test, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/home/user/Desktop/sandbox/test/test.py"
#endif
},
    {"unittest", NULL, 57, 3380, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/unittest/__init__.py"
#endif
},
    {"unittest._log", NULL, 58, 2505, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/unittest/_log.py"
#endif
},
    {"unittest.async_case", NULL, 59, 4215, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/unittest/async_case.py"
#endif
},
    {"unittest.case", NULL, 60, 47990, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/unittest/case.py"
#endif
},
    {"unittest.loader", NULL, 61, 14500, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/unittest/loader.py"
#endif
},
    {"unittest.main", NULL, 62, 7494, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/unittest/main.py"
#endif
},
    {"unittest.result", NULL, 63, 7273, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/unittest/result.py"
#endif
},
    {"unittest.runner", NULL, 64, 7048, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/unittest/runner.py"
#endif
},
    {"unittest.signals", NULL, 65, 2224, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/unittest/signals.py"
#endif
},
    {"unittest.suite", NULL, 66, 10086, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/unittest/suite.py"
#endif
},
    {"unittest.util", NULL, 67, 4420, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, "/usr/lib/python3.9/unittest/util.py"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(void) {
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

