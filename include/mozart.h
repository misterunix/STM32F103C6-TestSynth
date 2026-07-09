#include "midihelper.h"
#ifndef MOZART_H
#define MOZART_H

#define MEASURES 16
#define ALTERNATES 11
#define VOICES 3
#define PITCHES 6

const PROGMEM byte measure[MEASURES][ALTERNATES][VOICES][PITCHES] =
    {
        {{{E5, 255, C5, 255, G4, 255}, /*measure 93   1st of 11 choices of measure 1*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{G4, 255, C5, 255, E5, 255}, /*measure 32   2nd of 11 choices of measure 1*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{G5, 255, E5, 255, C5, 255}, /*measure 69   3rd of 11 choices of measure 1*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{C5, B4, C5, E5, G4, C5}, /*measure 40-4th of 11 choices of measure 1*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{C6, B5, C6, G5, E5, C5}, /*measure 148-5th of 11 choices of measure 1*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{E5, D5, E5, G5, C6, G5}, /*measure 104-6th of 11 choices of measure 1*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{G5, 255, F5, E5, D5, C5}, /*measure 152-7th of 11 choices of measure 1*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{E5, C5, G5, E5, C6, G5}, /*measure 119-8th of 11 choices of measure 1*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{C5, 255, G4, 255, E5, 255}, /*measure 98-9th of 11 choices of measure 1*/
          {E3, G3, E3, G3, E3, G3},
          {C3, 255, C3, 255, C3, 255}},
         {{G5, 255, C3, 255, E3, 255}, /*measure 325-10th of 11 choices of measure 1*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{C5, 255, C5, 255, C5, 255}, /*measure 542-11th of 11 choices of measure 1*/
          {E4, 255, E4, 255, E4, 255},
          {C3, 255, C3, 255, C3, 255}}},
        {{{E5, 255, C5, 255, G4, 255}, /*measure 222-1st of 11 choices of measure 2*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{G4, 255, C5, 255, E5, 255}, /*measure 6-2nd of 11 choices of measure 2*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{G5, 255, E5, 255, C5, 255}, /*measure 95-3rd of 11  choices of measure 2*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{C5, G4, C5, E5, G4, C5}, /*measure 17-4th of 11 choices of measure 2*/
          {G3, 255, 255, 255, 255, 255},
          {E3, 255, 255, 255, 255, 255}},
         {{C6, B5, C6, G5, E5, C5}, /*measure 74-5th of 11 choices of measure 2*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, C3, 255, C3, 255}},
         {{E5, D5, E5, G5, C6, G5}, /*measure 157-6th of 11 choices of measure 2*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{G5, 255, F5, E5, D5, C5}, /*measure 60-7th of 11 choices of measure 2*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{C5, G4, E5, C5, G5, E5}, /*measure 84-8th of 11 choices of measure 2*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{C5, 255, G4, 255, E5, 255}, /*measure 142-9th of 11 choices of measure 2*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{G5, 255, C5, 255, E5, 255}, /* measure 872550th of 11 choices of measure 2*/
          {E3, 255, 255, 255, G3, 255},
          {C3, 255, 255, 255, C3, 255}},
         {{C5, 255, C5, 255, C5, 255}, /*measure 1302551th of 11 choices of measure 2*/
          {E4, 255, E4, 255, E4, 255},
          {C3, 255, C3, 255, C3, 255}}},
        {{{D5, E5, F5, D5, C5, B4}, /*measure 141255st of 11 choices of measure 3*/
          {G3, 255, 255, 255, 255, 255},
          {B2, 255, 255, 255, G2, 255}},
         {{B4, 255, D5, 255, G5, 255}, /*measure 128-2nd of 11 choices of measure 3*/
          {255, 255, 255, 255, 255, 255},
          {G2, 255, 255, 255, 255, 255}},
         {{B4, 255, D5, B4, A4, G4}, /*measure 158-3rd of 11 choices of measure 3*/
          {255, 255, 255, 255, 255, 255},
          {G2, 255, 255, 255, 255, 255}},
         {{F5, 255, D5, 255, B4, 255}, /*measure 113-4th of 11 choices of measure 3*/
          {B3, 255, 255, 255, 255, 255},
          {G3, 255, 255, 255, 255, 255}},
         {{G5, Fs5, G5, D5, B4, G4}, /*measure 163-5th of 11 choices of measure 3*/
          {D3, 255, 255, 255, 255, 255},
          {B2, 255, 255, 255, 255, 255}},
         {{F5, E5, F5, D5, C5, B4}, /*measure 27-6th of 11 choices of measure 3*/
          {B3, 255, 255, 255, 255, 255},
          {G3, 255, 255, 255, 255, 255}},
         {{B4, C5, D5, E5, F5, D5}, /*measure 171-7th of 11 choices of measure 3*/
          {G3, 255, 255, 255, 255, 255},
          {G2, 255, 255, 255, 255, 255}},
         {{D5, 255, D5, 255, D5, 255}, /*measure 114-8th of 11 choices of measure 3*/
          {B4, 255, B4, 255, B4, 255},
          {G3, 255, G3, 255, G3, 255}},
         {{B4, C5, D5, B4, A4, G4}, /*measure 42-9th of 11 choices of measure 3*/
          {255, 255, 255, 255, 255, 255},
          {G2, 255, 255, 255, 255, 255}},
         {{B4, 255, D5, B4, A4, G4}, /*measure 1652550th of 11 choices of measure 3*/
          {255, 255, 255, 255, 255, 255},
          {B3, 255, 255, 255, 255, 255}},
         {{B4, A4, B4, C5, D5, B4}, /*measure 102551th of 11 choices of measure 3*/
          {255, 255, 255, 255, 255, 255},
          {G3, 255, 255, 255, 255, 255}}},
        {{{C5, B4, C5, E5, G4, 255}, /*measure 41255st of 11 choices of measure 4*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{E5, C5, B4, C5, G4, 255}, /*measure 63-2nd of 11 choices of measure 4*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{C5, 255, G4, 255, E4, 255}, /*measure 13-3rd of 11 choices of measure 4*/
          {G3, 255, 255, 255, 255, 255},
          {E3, 255, 255, 255, 255, 255}},
         {{C5, 255, E5, 255, G4, 255}, /*measure 85-4th of 11 choices of measure 4*/
          {G3, 255, 255, 255, 255, 255},
          {E3, 255, 255, 255, 255, 255}},
         {{C5, B4, C5, G4, E4, C4}, /*measure 45-5th of 11 choices of measure 4*/
          {G3, 255, 255, 255, 255, 255},
          {E3, 255, 255, 255, 255, 255}},
         {{C5, 255, C5, D5, E5, 255}, /*measure 167-6th of 11 choices of measure 4*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{E5, 255, E5, F5, G5, 255}, /*measure 53-7th  of 11 choices of measure 4*/
          {C5, 255, C5, D5, E5, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{C5, 255, E5, C5, G4, 255}, /*measure 50-8th of 11 choices of measure 4*/
          {G3, 255, 255, 255, 255, 255},
          {E3, 255, 255, 255, 255, 255}},
         {{C5, G4, E5, C5, G5, 255}, /*measure 156-9th of 11 choices of measure 4*/
          {G3, 255, 255, 255, 255, 255},
          {E3, 255, 255, 255, 255, 255}},
         {{C5, 255, E5, C5, G5, 255}, /*measure 612550th of 11 choices of measure 4*/
          {G3, 255, 255, 255, 255, 255},
          {E3, 255, 255, 255, 255, 255}},
         {{C5, E5, C5, G4, E4, 255}, /*measure 1032551th of 11 choices of measure 4*/
          {G3, 255, 255, 255, 255, 255},
          {E3, 255, 255, 255, 255, 255}}},
        {{{Fs5, 255, A5, Fs5, D5, Fs5}, /*measure 105255st of 11 choices of measure 5*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{D5, 255, Fs5, 255, A5, 255}, /*measure 146-2nd of 11 choices of measure 5*/
          {Fs4, 255, D4, 255, Fs5, 255},
          {C3, 255, C3, 255, C3, 255}},
         {{D5, A4, Fs5, D5, A5, Fs5}, /*measure 153-3rd of 11 choices of measure 5*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{D5, 255, D5, 255, D5, 255}, /*measure 161-4th of 11 choices of measure 5*/
          {Fs4, 255, Fs4, 255, Fs4, 255},
          {C3, 255, C3, 255, C3, 255}},
         {{D5, 255, A4, 255, Fs5, 255}, /*measure 80-5th of 11 choices of measure 5*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{D5, Cs5, D5, Fs5, A5, Fs5}, /*measure 154-6th of 11 choices of measure 5*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{Fs5, 255, A5, 255, D5, 255}, /*measure 99-7th  of 11 choices of measure 5*/
          {A3, 255, 255, 255, A3, 255},
          {C3, 255, 255, 255, C3, 255}},
         {{A4, 255, A4, D5, Fs5, 255}, /*measure 140-8th  of 11 choices of measure 5*/
          {Fs3, 255, Fs3, 255, A3, 255},
          {C3, 255, C3, 255, C3, 255}},
         {{Fs5, 255, Fs5, 255, Fs5, 255}, /*measure 75-9th of 11 choices of measure 5*/
          {D5, 255, D5, 255, D5, 255},
          {C3, 255, C3, 255, C3, 255}},
         {{Fs5, 255, Fs5, D5, A5, 255}, /*measure 1352550th of 11 choices of measure 5*/
          {D3, 255, D3, 255, D3, 255},
          {C3, 255, C3, 255, C3, 255}},
         {{Fs5, D5, A4, A5, Fs5, D5}, /*measure 282551th of 11 choices of measure 5*/
          {A3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}}},
        {{{G5, Fs5, G5, B5, D2, 255}, /*measure 122255st of 11 choices of measure 6*/
          {D3, 255, 255, 255, 255, 255},
          {B2, 255, 255, 255, 255, 255}},
         {{G5, 255, B5, G5, D5, B4}, /*measure 46-2nd of 11 choices of measure 6*/
          {D3, 255, 255, 255, 255, 255},
          {B2, 255, 255, 255, 255, 255}},
         {{G5, 255, B5, 255, D5, 255}, /*measure 55-3rd of 11 choices of measure 6*/
          {D3, 255, 255, 255, 255, 255},
          {B2, 255, 255, 255, 255, 255}},
         {{A4, 255, Fs4, G4, B4, B5}, /*measure 2-4th of 11 choices of measure 6*/
          {G3, 255, 255, 255, 255, 255},
          {B2, 255, 255, 255, 255, 255}},
         {{G5, Fs5, G5, D5, B4, G4}, /*measure 97-5th of 11 choices of measure 6*/
          {D3, 255, 255, 255, G3, 255},
          {B2, 255, 255, 255, B2, 255}},
         {{G5, 255, B5, G5, D5, G5}, /*measure 68-6th of 11 choices of measure 6*/
          {255, 255, 255, 255, 255, 255},
          {B2, 255, 255, 255, 255, 255}},
         {{D5, 255, G5, D5, B4, D5}, /*measure 133-7th of 11 choices of measure 6*/
          {G3, 255, 255, 255, 255, 255},
          {B2, 255, 255, 255, 255, 255}},
         {{D5, 255, D5, G5, B5, 255}, /*measure 86-8th of 11 choices of measure 6*/
          {G3, 255, 255, 255, 255, 255},
          {B2, 255, 255, 255, 255, 255}},
         {{A5, G5, Fs5, G5, D5, 255}, /*measure 129-9th of 11 choices of measure 6*/
          {D3, 255, D3, 255, G3, 255},
          {B2, 255, B2, 255, B2, 255}},
         {{G5, 255, G5, D5, B5, 255}, /*measure 472550th  of 11 choices of measure 6*/
          {D3, 255, 255, 255, 255, 255},
          {B2, 255, 255, 255, 255, 255}},
         {{G5, B5, G5, D5, B4, 255}, /*measure 372551th of 11 choices of measure 6*/
          {D3, 255, 255, 255, 255, 255},
          {B2, 255, 255, 255, 255, 255}}},
        {{{E5, C4, B4, A4, G4, Fs4}, /*measure 11255st   of 11 choices of measure 7*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, D3, 255, D2, 255}},
         {{A4, E5, D5, C4, B4, A4}, /*measure 134-2nd of 11 choices of measure 7*/
          {255, 255, B4, A4, G4, Fs4},
          {C3, 255, D3, 255, D2, 255}},
         {{D5, C4, C4, B4, B4, A4}, /*measure 110-3rd  of 11 choices of measure 7*/
          {B4, A4, A4, G4, G4, Fs4},
          {C3, 255, D3, 255, D2, 255}},
         {{E5, G5, D5, C5, B4, A4}, /*measure 159-4th of 11 choices of measure 7*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, D3, 255, D2, 255}},
         {{A4, E5, D5, G5, Fs5, A5}, /*measure 36-5th of 11 choices of measure 7*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, D3, 255, D2, 255}},
         {{E5, A5, G5, B5, Fs5, A5}, /*measure 118-6th of 11 choices of measure 7*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, D3, 255, D2, 255}},
         {{C5, E5, G5, D5, A4, Fs5}, /*measure 21-7th of 11 choices of measure 7*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, D3, 255, D2, 255}},
         {{E5, G5, D5, G5, A4, Fs5}, /*measure 169-8th of 11 choices of measure 7*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, D3, 255, D2, 255}},
         {{E5, C4, B4, G4, A4, Fs4}, /*measure 62-9th of 11 choices of measure 7*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, D3, 255, D2, 255}},
         {{E5, C6, B5, G5, A5, Fs5}, /*measure 1472550th of 11 choices of measure 7*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, D3, 255, D2, 255}},
         {{A4, 255, D5, C5, B4, A4}, /*measure 1062551th of 11 choices of measure 7*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, D3, 255, D2, 255}}},
        {{{G5, 255, 255, 255, 255, 255}, /*measure 30255st of 11 choices of measure 8*/
          {B4, 255, 255, 255, 255, 255},
          {G2, 255, B3, G3, Fs3, E3}},
         {{G5, 255, 255, 255, 255, 255}, /*measure 81-2nd of 11 choices of measure 8*/
          {B4, 255, 255, 255, 255, 255},
          {G2, 255, B3, G3, Fs3, E3}},
         {{G5, 255, 255, 255, 255, 255}, /*measure 24-3rd of 11 choices of measure 8*/
          {B4, 255, 255, 255, 255, 255},
          {G2, 255, B3, G3, Fs3, E3}},
         {{G5, 255, 255, 255, 255, 255}, /*measure 100-4th  of 11 choices of measure 8*/
          {B4, 255, 255, 255, 255, 255},
          {G2, 255, B3, G3, Fs3, E3}},
         {{G5, 255, 255, 255, 255, 255}, /*measure 107-5th of 11 choices of measure 8*/
          {B4, 255, 255, 255, 255, 255},
          {G2, 255, B3, G3, Fs3, E3}},
         {{G5, 255, 255, 255, 255, 255}, /*measure 91-6th of 11 choices of measure 8*/
          {B4, 255, 255, 255, 255, 255},
          {G2, 255, B3, G3, Fs3, E3}},
         {{G5, 255, 255, 255, 255, 255}, /*measure 127-7th of 11 choices of measure 8*/
          {B4, 255, 255, 255, 255, 255},
          {G2, 255, B3, G3, Fs3, E3}},
         {{G5, 255, 255, 255, 255, 255}, /*measure 94-8th of 11 choices of measure 8*/
          {B4, 255, 255, 255, 255, 255},
          {G2, 255, B3, G3, Fs3, E3}},
         {{G5, 255, 255, 255, 255, 255}, /*measure 123-9th of 11 choices of measure 8*/
          {B4, 255, 255, 255, 255, 255},
          {G2, 255, B3, G3, Fs3, E3}},
         {{G5, 255, 255, 255, 255, 255}, /*measure 33-10th of 11 choices of measure 8*/
          {B4, 255, 255, 255, 255, 255},
          {G2, 255, B3, G3, Fs3, E3}},
         {{G5, 255, 255, 255, 255, 255}, /*measure 5-11th of 11 choices of measure 8*/
          {B4, 255, 255, 255, 255, 255},
          {G2, 255, B3, G3, Fs3, E3}}},
        {{{Fs5, 255, A5, Fs5, D5, Fs5}, /*measure 70-1st of 11 choices of measure 9*/
          {255, 255, 255, 255, 255, 255},
          {D2, 255, 255, 255, C2, 255}},
         {{D5, A4, D5, Fs5, A5, Fs5}, /*measure 117-2nd of 11 choices of measure 9*/
          {Fs2, 255, 255, 255, 255, 255},
          {D2, 255, 255, 255, 255, 255}},
         {{Fs5, 255, A5, 255, D5, 255}, /*measure 66-3rd of 11 choices of measure 9*/
          {A3, 255, Fs3, 255, D3, 255},
          {D3, 255, D3, 255, C3, 255}},
         {{Fs5, A5, D6, A5, Fs5, A5}, /*measure 90-4th of 11 choices of measure 9*/
          {A3, 255, 255, 255, A3, 255},
          {C3, 255, 255, 255, C3, 255}},
         {{D4, Fs4, A4, D5, Fs5, A5}, /*measure 25-5th of 11 choices of measure 9*/
          {255, 255, 255, 255, 255, 255},
          {D3, 255, 255, 255, C3, 255}},
         {{Fs5, 255, G5, Fs5, G5, Fs5}, /*measure 138-6th of 11 choices of measure 9*/
          {A4, 255, 255, 255, 255, 255},
          {D2, D3, Cs3, D3, C3, D3}},
         {{A5, 255, Fs5, 255, D5, 255}, /*measure 16-7th of 11 choices of measure 9*/
          {Fs2, 255, 255, 255, 255, 255},
          {D2, 255, 255, 255, 255, 255}},
         {{D6, 255, A5, Fs5, D5, A4}, /*measure 120-8th of 11 choices of measure 9*/
          {Fs3, 255, 255, 255, Fs3, 255},
          {D3, 255, 255, 255, C3, 255}},
         {{D5, A4, D5, 255, Fs5, 255}, /*measure 65-9th of 11 choices of measure 9*/
          {Fs3, 255, 255, 255, 255, 255},
          {D3, 255, 255, 255, 255, 255}},
         {{Fs5, D5, A4, 255, Fs5, 255}, /*measure 102-10th of 11 choices of measure 9*/
          {A3, 255, 255, 255, A3, 255},
          {C3, 255, 255, 255, C3, 255}},
         {{A4, 255, D5, 255, Fs5, 255}, /*mmeasure 35-11th of 11 choices of measure 9*/
          {Fs3, 255, 255, 255, A3, 255},
          {D3, 255, 255, 255, C3, 255}}},
        {{{G5, 255, B5, G5, D5, 255}, /*measure 121-1st of 11 choices of measure 10 10*/
          {G3, 255, 255, 255, 255, 255},
          {B2, 255, 255, 255, 255, 255}},
         {{G5, 255, G4, 255, G4, 255}, /*measure 39-2nd of 11 choices of measure 10*/
          {255, 255, 255, 255, 255, 255},
          {B2, D3, G3, D3, B2, G2}},
         {{G5, B5, G5, B5, D5, 255}, /*measure 139-3rd of 11 choices of measure 10*/
          {255, 255, 255, 255, 255, 255},
          {B2, 255, 255, 255, 255, 255}},
         {{A5, G5, B5, G5, D5, G5}, /*measure 176-4th of 11 choices of measure 10*/
          {D3, 255, 255, 255, D3, 255},
          {B2, 255, 255, 255, B2, 255}},
         {{G5, 255, D5, B4, G4, 255}, /*measure 143-5th of 11 choices of measure 10*/
          {D3, 255, 255, 255, D3, 255},
          {B2, 255, 255, 255, B2, 255}},
         {{G5, B5, D6, B5, G5, 255}, /*measure 71-6th of 11 choices of measure 10*/
          {D3, 255, 255, 255, D3, 255},
          {B2, 255, 255, 255, B2, 255}},
         {{G5, B5, G5, D5, B4, G4}, /*measure 155-7th of 11 choices of measure 10*/
          {D3, 255, 255, 255, 255, 255},
          {B2, 255, 255, 255, 255, 255}},
         {{G5, D5, G5, B5, G5, D5}, /*measure 88-8th of 11 choices of measure 10*/
          {D3, 255, 255, 255, 255, 255},
          {B2, 255, 255, 255, 255, 255}},
         {{G5, B5, G5, 255, D5, 255}, /*measure 77-9th of 11 choices of measure 10*/
          {D3, 255, 255, 255, G3, 255},
          {B2, 255, 255, 255, B2, 255}},
         {{B4, A4, B4, C5, D5, B4}, /*measure 42550th of 11 choices of measure 10*/
          {255, 255, 255, 255, 255, 255},
          {G3, 255, 255, 255, 255, 255}},
         {{G5, 255, B5, D6, D5, 255}, /*measure 202551th of 11 choices of measure 10*/
          {255, 255, 255, 255, 255, 255},
          {B2, 255, 255, 255, 255, 255}}},
        {{{E5, 255, E5, 255, E5, 255}, /*measure 26255st of 11 choices of measure 11*/
          {C5, 255, C5, 255, C5, 255},
          {C3, E5, G3, E5, C4, C3}},
         {{C5, G4, C5, E5, G5, E5}, /*measure 126-2nd of 11 choices of measure 11*/
          {255, 255, 255, 255, 255, C5},
          {E3, 255, 255, 255, E3, C3}},
         {{E5, 255, G5, E5, C5, 255}, /*measure 15-3rd of 11 choices of measure 11*/
          {G3, 255, 255, 255, E3, 255},
          {C3, 255, 255, 255, C3, 255}},
         {{E5, C5, E5, G5, C6, G5}, /*measure 7-4th of 11 choices of measure 11*/
          {G3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{E5, G5, C6, G5, E5, C5}, /*measure 64-5th of 11 choices of measure 11*/
          {G3, 255, 255, 255, G3, 255},
          {C3, 255, 255, 255, C3, 255}},
         {{E5, 255, E5, F5, E5, 255}, /*measure 150-6th of 11 choices of measure 11*/
          {G4, 255, 255, 255, 255, 255},
          {C3, B2, C3, D3, E3, Fs3}},
         {{E5, 255, C4, 255, G4, 255}, /*measure 57-7th of 11 choices of measure 11*/
          {E3, G3, E3, G3, E3, G3},
          {C3, 255, C3, 255, C3, 255}},
         {{E5, 255, C5, E5, G5, C6}, /*measure 48-8th of 11 choices of measure 11*/
          {G3, 255, 255, 255, E3, 255},
          {C3, 255, 255, 255, C3, 255}},
         {{E5, C5, E5, 255, G5, 255}, /*measure 19-9th of 11 choices of measure 11*/
          {G3, 255, 255, 255, E3, 255},
          {C3, 255, 255, 255, C3, 255}},
         {{E5, C5, G4, 255, E5, 255}, /*measure 31-10th of 11 choices of measure 11*/
          {G3, 255, 255, 255, G3, 255},
          {C3, 255, 255, 255, C3, 255}},
         {{E5, 255, G5, 255, C6, 255}, /*measure 108-11th of 11 choices of measure 11*/
          {G3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}}},
        {{{E5, 255, D5, 255, 255, 255}, /*measure 92-1st of 11 choices of measure 12*/
          {C5, 255, B4, 255, 255, 255},
          {G3, 255, 255, 255, G2, 255}},
         {{D5, B4, G4, 255, 255, 255}, /*measure 56-2nd  of 11 choices of measure 12*/
          {G3, 255, 255, 255, G3, 255},
          {G2, 255, 255, 255, 255, 255}},
         {{E5, 255, D5, B4, G4, 255}, /*measure 132-3rd of 11 choices of measure 12*/
          {C5, 255, B4, G4, 255, 255},
          {G3, 255, G2, 255, 255, 255}},
         {{E5, C5, D5, B4, G4, 255}, /*measure 34-4th of 11 choices of measure 12*/
          {255, 255, 255, 255, 255, 255},
          {G3, 255, 255, 255, 255, 255}},
         {{G5, E5, D5, B4, G4, 255}, /*measure 125-5th of 11 choices of measure 12*/
          {255, 255, 255, 255, 255, 255},
          {G3, 255, G2, 255, 255, 255}},
         {{B4, D5, G5, D5, B4, 255}, /*measure 29-6th of 11 choices of measure 12*/
          {255, 255, 255, 255, 255, 255},
          {G3, 255, 255, 255, G3, 255}},
         {{E5, C5, B4, D5, G5, 255}, /*measure 175-7th of 11 choices of measure 12*/
          {255, 255, 255, 255, 255, 255},
          {G3, 255, 255, 255, G2, 255}},
         {{D5, B5, G5, D5, B4, 255}, /*measure 166-8th of 11 choices of measure 12*/
          {B3, 255, 255, 255, 255, 255},
          {G3, 255, 255, 255, 255, 255}},
         {{C5, G4, E5, C5, G5, E5}, /*measure 82-9th of 11 choices of measure 12*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{D5, 255, G4, 255, 255, 255}, /*measure 164-10th of 11 choices of measure 12*/
          {255, 255, 255, 255, 255, 255},
          {G3, Fs3, G3, D3, B2, G2}},
         {{D5, 255, G5, B5, D5, 255}, /*measure 92-11th of 11 choices of measure 12*/
          {B4, 255, 255, 255, 255, 255},
          {G2, 255, 255, 255, G3, 255}}},
        {{{E5, 255, C5, 255, G4, 255}, /*measure 112-1st of 11 choices of measure 13*/
          {E3, G3, E3, G3, E3, G3},
          {C3, 255, C3, 255, C3, 255}},
         {{G4, 255, C5, 255, E5, 255}, /*measure 174-2nd of 11 choices of measure 13*/
          {E3, G3, E3, G3, E3, G3},
          {C3, 255, C3, 255, C3, 255}},
         {{G5, 255, E5, 255, C5, 255}, /*measure 73-3rd of 11 choices of measure 13*/
          {E3, G3, E3, G3, E3, G3},
          {C3, 255, C3, 255, C3, 255}},
         {{C5, B4, C5, E5, G4, C5}, /*measure 67-4th of 11 choices of measure 13*/
          {E3, 255, 255, 255, G3, 255},
          {C3, 255, 255, 255, E3, 255}},
         {{C6, B5, C6, G5, E5, C5}, /*measure 76-5th of 11 choices of measure 13*/
          {E3, 255, 255, 255, G3, 255},
          {C3, 255, 255, 255, C3, 255}},
         {{E5, D5, E5, G5, C6, G5}, /*measure 101-6th of 11 choices of measure 13*/
          {G3, 255, 255, 255, E3, 255},
          {C3, 255, 255, 255, C3, 255}},
         {{G5, 255, F5, E5, D5, C5}, /*measure 43-7th of 11 choices of measure 13*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{C5, G4, E5, C5, G5, E5}, /*measure 51-8th of 11 choices of measure 13*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{C5, 255, G4, 255, E5, 255}, /*measure 137-9th of 11 choices of measure 13*/
          {E3, G3, E3, G3, E3, G3},
          {C3, 255, C3, 255, C3, 255}},
         {{G5, 255, C5, 255, E5, 255}, /*measure 144-10th of 11 choices of measure 13*/
          {E3, G3, E3, G3, E3, G3},
          {C3, 255, C3, 255, C3, 255}},
         {{C5, 255, C5, 255, C5, 255}, /*measure 122-11th of 11 choices of measure 13*/
          {E4, 255, E4, 255, E4, 255},
          {C3, 255, C3, 255, C3, 255}}},
        {{{E5, 255, C5, 255, G4, 255}, /*measure 49-1st of 11 choices of measure 14*/
          {E3, G3, E3, G3, E3, G3},
          {C3, 255, C3, 255, C3, 255}},
         {{G4, 255, C5, 255, E5, 255}, /*measure 18-2nd of 11 choices of measure 14*/
          {E3, 255, 255, 255, G3, 255},
          {C3, 255, 255, 255, C3, 255}},
         {{G5, 255, E5, 255, C5, 255}, /*measure 58-3rd of 11 choices of measure 14*/
          {E3, G3, E3, G3, E3, G3},
          {C3, 255, C3, 255, C3, 255}},
         {{C5, B4, C5, E5, G4, C5}, /*measure 160-4th of 11 choices of measure 14*/
          {E3, 255, 255, 255, E3, 255},
          {C3, 255, 255, 255, C3, 255}},
         {{C6, B5, C6, G5, E5, C5}, /*measure 136-5th of 11 choices of measure 14*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{E5, D5, E5, G5, C6, G5}, /*measure 162-6th of 11 choices of measure 14*/
          {G3, 255, 255, 255, E3, 255},
          {C3, 255, 255, 255, C3, 255}},
         {{G5, 255, F5, E5, D5, C5}, /*measure 168-7th of 11 choices of measure 14*/
          {E3, 255, 255, 255, G3, 255},
          {C3, 255, 255, 255, E3, 255}},
         {{C5, G4, E5, C5, G5, E5}, /*measure 115-8th of 11 choices of measure 14*/
          {E3, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, 255, 255}},
         {{C5, 255, G4, 255, E5, 255}, /*measure 38-9th of 11 choices of measure 14*/
          {E3, G3, E3, G3, E3, G3},
          {C3, 255, C3, 255, C3, 255}},
         {{G5, 255, C5, 255, E5, 255}, /*measure 59-10th of 11 choices of measure 14*/
          {E3, G3, E3, G3, E3, G3},
          {C3, 255, C3, 255, C3, 255}},
         {{C5, 255, C5, 255, C5, 255}, /*measure 124-11th of 11 choices of measure 14*/
          {E4, 255, E4, 255, E4, 255},
          {C3, 255, C3, 255, C3, 255}}},
        {{{D5, F5, D5, F5, B4, D5}, /*measure 109-1st of 11 choices of measure 15*/
          {A3, 255, 255, 255, D4, 255},
          {F3, 255, 255, 255, G3, 255}},
         {{D5, F5, A5, F5, D5, B4}, /*measure 116-2nd of 11 choices of measure 15*/
          {255, 255, 255, 255, 255, 255},
          {F3, 255, 255, 255, G3, 255}},
         {{D5, F5, A4, D5, B4, D5}, /*measure 145-3rd of 11 choices of measure 15*/
          {255, 255, 255, 255, 255, 255},
          {F3, 255, 255, 255, G3, 255}},
         {{D5, Cs5, D5, F5, G4, B4}, /*measure 52-4th of 11 choices of measure 15*/
          {255, 255, 255, 255, 255, 255},
          {F3, 255, 255, 255, G3, 255}},
         {{F5, 255, D5, 255, G5, 255}, /*measure 1-5th of 11 choices of measure 15*/
          {255, 255, 255, 255, 255, 255},
          {F3, 255, D3, 255, G3, 255}},
         {{F5, E5, D5, E5, F5, G5}, /*measure 23-6th of 11 choices of measure 15*/
          {255, 255, 255, 255, 255, 255},
          {F3, E3, D3, E3, F3, G3}},
         {{F5, E5, D5, 255, G5, 255}, /*measure 89-7th of 11 choices of measure 15*/
          {255, 255, 255, 255, 255, 255},
          {F3, E3, D3, 255, G3, 255}},
         {{F5, E5, D5, C5, B4, D5}, /*measure 72-8th of 11 choices of measure 15*/
          {255, 255, 255, 255, 255, 255},
          {F3, 255, 255, 255, G3, 255}},
         {{F5, D5, A4, 255, B4, 255}, /*measure 149-9th of 11 choices of measure 15*/
          {255, 255, 255, 255, 255, 255},
          {F3, 255, 255, 255, G3, 255}},
         {{F5, A5, A4, 255, B4, D5}, /*measure 173-10th of 11 choices of measure 15*/
          {255, 255, 255, 255, 255, 255},
          {F3, 255, 255, 255, G3, 255}},
         {{A4, 255, F5, D5, A4, B4}, /*measure 442-11th of 11 choices of measure 15*/
          {255, 255, 255, 255, 255, 255},
          {F3, 255, 255, 255, G3, 255}}},
        {{{C5, 255, 255, 255, 255, 255}, /*measure 142-1st of 11 choices of measure 16*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, G2, 255, C2, 255}},
         {{C5, 255, 255, 255, 255, 255}, /*measure 83-2nd of 11 choices of measure 16*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, G2, 255, C2, 255}},
         {{C5, 255, 255, 255, 255, 255}, /*measure 79-3rd of 11 choices of measure 16*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, G2, 255, C2, 255}},
         {{C5, 255, 255, 255, 255, 255}, /*measure 170-4th of 11 choices of measure 16*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, G2, 255, C2, 255}},
         {{C5, 255, 255, 255, 255, 255}, /*measure 93-5th of 11 choices of measure 16*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, G2, 255, C2, 255}},
         {{C5, 255, 255, 255, 255, 255}, /*measure 151-6th of 11 choices of measure 16*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, G2, 255, C2, 255}},
         {{C5, 255, 255, 255, 255, 255}, /*measure 172-7th of 11 choices of measure 16*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, G2, 255, C2, 255}},
         {{C5, 255, 255, 255, 255, 255}, /*measure 111-8th of 11 choices of measure 16*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, G2, 255, C2, 255}},
         {{C5, 255, 255, 255, 255, 255}, /*measure 8-9th of 11 choices of measure 16*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, G2, 255, C2, 255}},
         {{C5, 255, C4, 255, 255, 255}, /*measure 78-10th of 11 choices of measure 16*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, 255, 255, C2, 255}},
         {{C5, 255, 255, 255, 255, 255}, /*measure 131-11th of 11 choices of measure 16*/
          {255, 255, 255, 255, 255, 255},
          {C3, 255, G2, 255, C2, 255}}}};

#endif