/* true and false builtins */
#include <config.h>

#include "bashtypes.h"
#include "shell.h"
#include "builtins.h"
#include "common.h"

true_builtin (list)
     WORD_LIST *list;
{
  return EXECUTION_SUCCESS;
}

false_builtin (list)
     WORD_LIST *list;
{
  return EXECUTION_FAILURE;
}

static char *true_doc[] = {
	"Exit successfully.",
	"",
	"Return a successful result.",
	(char *)NULL
};

static char *false_doc[] = {
	"Exit unsuccessfully.",
	"",
	"Return an unsuccessful result.",
	(char *)NULL
};

struct builtin true_struct = {
	"true",
	true_builtin,
	BUILTIN_ENABLED,
	true_doc,
	"true",
	0
};

struct builtin false_struct = {
	"false",
	false_builtin,
	BUILTIN_ENABLED,
	false_doc,
	"false",
	0
};
