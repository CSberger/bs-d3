/*
 * https://github.com/d3/d3/blob/master/API.md
 */

open D3Array;

/*Js.log2 "min int:" (min_ [|1, 5|] ());*/
/*Js.log (min_ [|4., 5.|] ());*/
/*Js.log (min_ [|4., 5.|] accessor::(fun x => x *. x) ());*/
/*Js.log (max_ [|4., 5.|] ());*/
/**/
/*let (minEx, maxEx) = (extent [|4., 5., -1., 4.|] ());*/
/*Js.log2 minEx maxEx;*/
/*let (minStr, maxStr) = (extent [|"aa", "cd", "z", "bb"|] ());*/
/*Js.log2 minStr maxStr;*/
/**/
/*Js.log (extent [|4., 5., -1., 4.|] ());*/
/*Js.log (sum [|4., 5., -1., 4.|] ());*/
/*Js.log (mean [|4., 5., -1., 4.|] ());*/
/*Js.log (median [|4., 5., -1., 4.|] ());*/
/*Js.log (quantile [|4., 5., -1., 4.|] 0.25 ());*/
/*Js.log (variance [|4., 5., -1., 4.|] ());*/
/*Js.log2 "deviation:" (deviation [|4., 5., -1., 4.|] ());*/
/**/
/*Js.log2 "scan:" (scan [|4., 5., -8., 4.|] ());*/
/*Js.log2 "bisectLeft:" (bisectLeft [|4., 5., 8., 14.|] 7. ());*/