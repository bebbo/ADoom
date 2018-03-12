#ifndef _INLINE_DOOMSND_H
#define _INLINE_DOOMSND_H

#ifndef CLIB_DOOMSND_PROTOS_H
#define CLIB_DOOMSND_PROTOS_H
#endif

#ifndef __INLINE_STUB_H
#include <inline/stubs.h>
#endif

#include <exec/types.h>

#ifndef BASE_EXT_DECL
#define BASE_EXT_DECL
#define BASE_EXT_DECL0 extern struct Library * DoomSndBase;
#endif
#ifndef BASE_PAR_DECL
#define BASE_PAR_DECL
#define BASE_PAR_DECL0 void
#endif
#ifndef DOOMSND_BASE_NAME
#define DOOMSND_BASE_NAME DoomSndBase
#endif

BASE_EXT_DECL0

static __inline void
Sfx_SetVol(BASE_PAR_DECL int vol)
{
  BASE_EXT_DECL
  register struct Library * a6 __asm("a6") = DOOMSND_BASE_NAME;
  register int d0 __asm("d0") = vol;
  __asm volatile ("jsr a6@(-0x1e:W)"
  : /* No Output */
  : "r" (a6), "r" (d0)
  : "d1", "a0", "a1", "fp0", "fp1", "cc", "memory");
}

static __inline void
Sfx_Start(BASE_PAR_DECL char * wave, int cnum, int step, int vol, int sep, int length)
{
  BASE_EXT_DECL
  register struct Library * a6 __asm("a6") = DOOMSND_BASE_NAME;
  register char * a0 __asm("a0") = wave;
  register int d0 __asm("d0") = cnum;
  register int d1 __asm("d1") = step;
  register int d2 __asm("d2") = vol;
  register int d3 __asm("d3") = sep;
  register int d4 __asm("d4") = length;
  __asm volatile ("jsr a6@(-0x24:W)"
  : /* No Output */
  : "r" (a6), "r" (a0), "r" (d0), "r" (d1), "r" (d2), "r" (d3), "r" (d4)
  : "d1", "a0", "a1", "fp0", "fp1", "cc", "memory");
}

static __inline void
Sfx_Update(BASE_PAR_DECL int cnum, int step, int vol, int sep)
{
  BASE_EXT_DECL
  register struct Library * a6 __asm("a6") = DOOMSND_BASE_NAME;
  register int d0 __asm("d0") = cnum;
  register int d1 __asm("d1") = step;
  register int d2 __asm("d2") = vol;
  register int d3 __asm("d3") = sep;
  __asm volatile ("jsr a6@(-0x2a:W)"
  : /* No Output */
  : "r" (a6), "r" (d0), "r" (d1), "r" (d2), "r" (d3)
  : "a0", "a1", "fp0", "fp1", "cc", "memory");
}

static __inline void
Sfx_Stop(BASE_PAR_DECL int cnum)
{
  BASE_EXT_DECL
  register struct Library * a6 __asm("a6") = DOOMSND_BASE_NAME;
  register int d0 __asm("d0") = cnum;
  __asm volatile ("jsr a6@(-0x30:W)"
  : /* No Output */
  : "r" (a6), "r" (d0)
  : "d1", "a0", "a1", "fp0", "fp1", "cc", "memory");
}

static __inline int
Sfx_Done(BASE_PAR_DECL int cnum)
{
  BASE_EXT_DECL
  register int res __asm("d0");
  register struct Library * a6 __asm("a6") = DOOMSND_BASE_NAME;
  register int d0 __asm("d0") = cnum;
  __asm volatile ("jsr a6@(-0x36:W)"
  : "=r" (res)
  : "r" (a6), "r" (d0)
  : "d1", "a0", "a1", "fp0", "fp1", "cc", "memory");
  return res;
}

static __inline void
Mus_SetVol(BASE_PAR_DECL int vol)
{
  BASE_EXT_DECL
  register struct Library * a6 __asm("a6") = DOOMSND_BASE_NAME;
  register int d0 __asm("d0") = vol;
  __asm volatile ("jsr a6@(-0x3c:W)"
  : /* No Output */
  : "r" (a6), "r" (d0)
  : "d1", "a0", "a1", "fp0", "fp1", "cc", "memory");
}

static __inline int
Mus_Register(BASE_PAR_DECL void * musdata)
{
  BASE_EXT_DECL
  register int res __asm("d0");
  register struct Library * a6 __asm("a6") = DOOMSND_BASE_NAME;
  register void * a0 __asm("a0") = musdata;
  __asm volatile ("jsr a6@(-0x42:W)"
  : "=r" (res)
  : "r" (a6), "r" (a0)
  :  "d1", "a1", "fp0", "fp1", "cc", "memory");
  return res;
}

static __inline void
Mus_Unregister(BASE_PAR_DECL int handle)
{
  BASE_EXT_DECL
  register struct Library * a6 __asm("a6") = DOOMSND_BASE_NAME;
  register int d0 __asm("d0") = handle;
  __asm volatile ("jsr a6@(-0x48:W)"
  : /* No Output */
  : "r" (a6), "r" (d0)
  : "d0", "d1", "a0", "a1", "fp0", "fp1", "cc", "memory");
}

static __inline void
Mus_Play(BASE_PAR_DECL int handle, int looping)
{
  BASE_EXT_DECL
  register struct Library * a6 __asm("a6") = DOOMSND_BASE_NAME;
  register int d0 __asm("d0") = handle;
  register int d1 __asm("d1") = looping;
  __asm volatile ("jsr a6@(-0x4e:W)"
  : /* No Output */
  : "r" (a6), "r" (d0), "r" (d1)
  : "d0", "d1", "a0", "a1", "fp0", "fp1", "cc", "memory");
}

static __inline void
Mus_Stop(BASE_PAR_DECL int handle)
{
  BASE_EXT_DECL
  register struct Library * a6 __asm("a6") = DOOMSND_BASE_NAME;
  register int d0 __asm("d0") = handle;
  __asm volatile ("jsr a6@(-0x54:W)"
  : /* No Output */
  : "r" (a6), "r" (d0)
  : "d0", "d1", "a0", "a1", "fp0", "fp1", "cc", "memory");
}

static __inline void
Mus_Pause(BASE_PAR_DECL int handle)
{
  BASE_EXT_DECL
  register struct Library * a6 __asm("a6") = DOOMSND_BASE_NAME;
  register int d0 __asm("d0") = handle;
  __asm volatile ("jsr a6@(-0x5a:W)"
  : /* No Output */
  : "r" (a6), "r" (d0)
  : "d0", "d1", "a0", "a1", "fp0", "fp1", "cc", "memory");
}

static __inline void
Mus_Resume(BASE_PAR_DECL int handle)
{
  BASE_EXT_DECL
  register struct Library * a6 __asm("a6") = DOOMSND_BASE_NAME;
  register int d0 __asm("d0") = handle;
  __asm volatile ("jsr a6@(-0x60:W)"
  : /* No Output */
  : "r" (a6), "r" (d0)
  : "d0", "d1", "a0", "a1", "fp0", "fp1", "cc", "memory");
}

static __inline int
Mus_Done(BASE_PAR_DECL int handle)
{
  BASE_EXT_DECL
  register int res __asm("d0");
  register struct Library * a6 __asm("a6") = DOOMSND_BASE_NAME;
  register int d0 __asm("d0") = handle;
  __asm volatile ("jsr a6@(-0x66:W)"
  : "=r" (res)
  : "r" (a6), "r" (d0)
  : "d0", "d1", "a0", "a1", "fp0", "fp1", "cc", "memory");
  return res;
}

#undef BASE_EXT_DECL
#undef BASE_EXT_DECL0
#undef BASE_PAR_DECL
#undef BASE_PAR_DECL0
#undef DOOMSND_BASE_NAME

#endif /*  _INLINE_DOOMSND_H  */
