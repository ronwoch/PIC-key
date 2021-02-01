# PIC-key
Started life as a blinken-lichten demo on the Velleman 8048, and is evolving into some form of Morse Code ... thing.


## Just a silly blinken-lichten demo gone... right? 

This started as an attempt at getting some code - any code - to run on my PIC programmer. Over the course of some 12-ish hours, many mangled code examples turned into this. Of note, I have rewritten pretty much every single bit of this multiple times, breaking things, fixing them, then when I finally got something working, I realized it would be fun to make the lights blink in morse code. Currently my idea is to build an (admittedly absurd) encoding table for the English alphabet, so that I can get it to output anything I want by simply calling the correct letters. There is almost certainly a better way to do this than making an individual function for each letter. Seems like a good place to look into data structures to store some kind of lookup table. Might also be able to find prior work on encoding ASCII as Morse, or translating between the two. 

I also want to add button funtionality, maybe make some kind of 'code keyer' - not that it would be that useful on the programmer - but it could be broken out into a discreet electronic build. Homebrew keyers are nothing new, I am sure, so might find good inspiration in that area as well.  
