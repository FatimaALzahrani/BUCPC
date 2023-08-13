# Table of conent :
    * [Problem](#Discription)
    * [Input](#Discription)
    * [Output](#Discription)
    * [Examples](#Discription)
    * [Explain in Arabic](#Explain_in_Arabic)
    * [Solutions](#Solutions)

## Discription
You've encountered a fascinating sequence of strings, each composed solely of the characters `(`, `)`, `[`, and `]`. You're tasked with determining their validity based on the following rules:
(a) An empty string is inherently valid.
(b) If two strings, A and B, are both valid, then their concatenation, AB, is also considered valid.
(c) If a string A is valid, then the enclosed versions, namely (A) and [A], are also valid.
Write a powerful program that can process this sequence of strings and accurately ascertain their validity. Your program should operate under the assumption that the maximum length of each string does not exceed 128 characters.

## Input
The input file commences with a positive integer `n`, followed by a sequence of `n` strings. Each string comprises only the characters `(`, `)`, `[`, and `]`, and they are presented one string per line.

## Output
For each input string, produce an output of 'Yes' or 'No', signifying whether the string adheres to the specified rules of validity.

## Examples
|standard input|standard output|
|:---:|:---:|
|3 
([]) 
(([()]))) 
([()[]()])()|Yes
No 
Yes|

## Explain_in_Arabic
