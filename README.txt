
E = represent Exponent
M = represent  Mantissa

negative number = N = (−1)^Sign × M × 2^E
positive number = N = M × 2^E

for example : 
    127{
        sing = + = 0
        Exponent = [floor(log2(127))] = 6
        Mantissa = [127 / 2^6] = [127/64] = 1.984375
        N = 1.984375 * 2^6
    }
    -300{
        Sign:
            The sign is determined by checking if the number is positive or negative.
                Use fabs to get the absolute value of the number for further calculations.
        Exponent:
            Use the formula floor(log2(-300)) to to calculate the largest integer E such that
                2^E <= |N|
        Mantissa:
            Normalize |N| by dividing it by 2^Exponent
            M = |N| / 2^E

        sing = - = 1
        Exponent = floor(log2(-300)) = 8
        Mantissa = fabs(-300) / 2^8

        N = (-1)^1 * 1.171875 * 2^8

    }