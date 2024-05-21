#include "Uhrtype.hpp"

/*
 * Layout Front
 *
 *     0 1 2 3 4 5 6 7 8 9 0
 *  0  E S K I S T A F Ü N F
 * 12  Z E H N Z W A N Z I G
 * 23  D R E I V I E R T E L
 * 34  V O R F U N K N A C H
 * 45  H A L B A E L F Ü N F
 * 56  E I N S X A M Z W E I
 * 67  D R E I P M J V I E R
 * 78  S E C H S N L A C H T
 * 89  S I E B E N Z W Ö L F
 * 100 Z E H N E U N K U H R
 * 
 */

#define LED_LAYOUT_REVERSE 0

#define LED_MAP(x) (x)

class UHR_114_t : public iUhrType {
public:

    //------------------------------------------------------------------------------


    //------------------------------------------------------------------------------

    virtual const bool hasDreiviertel() override { return true; }

    virtual const uint16_t NUM_PIXELS() override { return 110; };

    //------------------------------------------------------------------------------

    virtual const uint16_t NUM_SMATRIX() override { return 110; };

    virtual const uint16_t getMinArr(uint8_t col, uint8_t row) override {
        return 0;
    };

    //------------------------------------------------------------------------------

    void show(uint8_t text) override {

        switch (text) {
        case es_ist:
            // Es
            Letter_set(LED_MAP(0));
            Letter_set(LED_MAP(1));

            // Ist
            Letter_set(LED_MAP(3));
            Letter_set(LED_MAP(4));
            Letter_set(LED_MAP(5));
            break;

            //------------------------------------------------------------------------------

        case nach:
        case v_nach:
            Letter_set(LED_MAP(33));
            Letter_set(LED_MAP(34));
            Letter_set(LED_MAP(35));
            Letter_set(LED_MAP(36));
            break;

            //------------------------------------------------------------------------------

        case vor:
        case v_vor:
            Letter_set(LED_MAP(41));
            Letter_set(LED_MAP(42));
            Letter_set(LED_MAP(43));
            break;
            //------------------------------------------------------------------------------

        case viertel:
            Letter_set(LED_MAP(26));
            Letter_set(LED_MAP(27));
            Letter_set(LED_MAP(28));
            Letter_set(LED_MAP(29));
            Letter_set(LED_MAP(30));
            Letter_set(LED_MAP(31));
            Letter_set(LED_MAP(32));
            break;

            //------------------------------------------------------------------------------

        case dreiviertel:
            Letter_set(LED_MAP(22));
            Letter_set(LED_MAP(23));
            Letter_set(LED_MAP(24));
            Letter_set(LED_MAP(25));
            Letter_set(LED_MAP(26));
            Letter_set(LED_MAP(27));
            Letter_set(LED_MAP(28));
            Letter_set(LED_MAP(29));
            Letter_set(LED_MAP(30));
            Letter_set(LED_MAP(31));
            Letter_set(LED_MAP(32));
            break;

            //------------------------------------------------------------------------------

        case fuenf:
            Letter_set(LED_MAP(7));
            Letter_set(LED_MAP(8));
            Letter_set(LED_MAP(9));
            Letter_set(LED_MAP(10));
            break;

            //------------------------------------------------------------------------------

        case zehn:
            Letter_set(LED_MAP(18));
            Letter_set(LED_MAP(19));
            Letter_set(LED_MAP(20));
            Letter_set(LED_MAP(21));
            break;

            //------------------------------------------------------------------------------
        case zwanzig:
            Letter_set(LED_MAP(11));
            Letter_set(LED_MAP(12));
            Letter_set(LED_MAP(13));
            Letter_set(LED_MAP(14));
            Letter_set(LED_MAP(15));
            Letter_set(LED_MAP(16));
            Letter_set(LED_MAP(17));
            break;

            //------------------------------------------------------------------------------

        case halb:
            Letter_set(LED_MAP(44));
            Letter_set(LED_MAP(45));
            Letter_set(LED_MAP(46));
            Letter_set(LED_MAP(47));
            break;

            //------------------------------------------------------------------------------

        case eins:
            Letter_set(LED_MAP(62));
            Letter_set(LED_MAP(63));
            Letter_set(LED_MAP(64));
            Letter_set(LED_MAP(65));
            break;

            //------------------------------------------------------------------------------

        case uhr:
            Letter_set(LED_MAP(99));
            Letter_set(LED_MAP(100));
            Letter_set(LED_MAP(101));
            break;

            //------------------------------------------------------------------------------

        case h_ein:
            Letter_set(LED_MAP(63));
            Letter_set(LED_MAP(64));
            Letter_set(LED_MAP(65));
            break;

            //------------------------------------------------------------------------------

        case h_zwei:
            Letter_set(LED_MAP(55));
            Letter_set(LED_MAP(56));
            Letter_set(LED_MAP(57));
            Letter_set(LED_MAP(58));
            break;

            //------------------------------------------------------------------------------

        case h_drei:
            Letter_set(LED_MAP(66));
            Letter_set(LED_MAP(67));
            Letter_set(LED_MAP(68));
            Letter_set(LED_MAP(69));
            break;

            //------------------------------------------------------------------------------

        case h_vier:
            Letter_set(LED_MAP(73));
            Letter_set(LED_MAP(74));
            Letter_set(LED_MAP(75));
            Letter_set(LED_MAP(76));
            break;

            //------------------------------------------------------------------------------

        case h_fuenf:
            Letter_set(LED_MAP(51));
            Letter_set(LED_MAP(52));
            Letter_set(LED_MAP(53));
            Letter_set(LED_MAP(54));
            break;

            //------------------------------------------------------------------------------

        case h_sechs:
            Letter_set(LED_MAP(83));
            Letter_set(LED_MAP(84));
            Letter_set(LED_MAP(85));
            Letter_set(LED_MAP(86));
            Letter_set(LED_MAP(87));
            break;

            //------------------------------------------------------------------------------

        case h_sieben:
            Letter_set(LED_MAP(88));
            Letter_set(LED_MAP(89));
            Letter_set(LED_MAP(90));
            Letter_set(LED_MAP(91));
            Letter_set(LED_MAP(92));
            Letter_set(LED_MAP(93));
            break;

            //------------------------------------------------------------------------------

        case h_acht:
            Letter_set(LED_MAP(77));
            Letter_set(LED_MAP(78));
            Letter_set(LED_MAP(79));
            Letter_set(LED_MAP(80));
            break;

            //------------------------------------------------------------------------------

        case h_neun:
            Letter_set(LED_MAP(103));
            Letter_set(LED_MAP(104));
            Letter_set(LED_MAP(105));
            Letter_set(LED_MAP(106));
            break;

            //------------------------------------------------------------------------------

        case h_zehn:
            Letter_set(LED_MAP(106));
            Letter_set(LED_MAP(107));
            Letter_set(LED_MAP(108));
            Letter_set(LED_MAP(109));
            break;

            //------------------------------------------------------------------------------

        case h_elf:
            Letter_set(LED_MAP(49));
            Letter_set(LED_MAP(50));
            Letter_set(LED_MAP(51));
            break;

            //------------------------------------------------------------------------------

        case h_zwoelf:

            Letter_set(LED_MAP(94));
            Letter_set(LED_MAP(95));
            Letter_set(LED_MAP(96));
            Letter_set(LED_MAP(97));
            Letter_set(LED_MAP(98));
            break;

        default:
            break;
            //------------------------------------------------------------------------------
        };
    };
};