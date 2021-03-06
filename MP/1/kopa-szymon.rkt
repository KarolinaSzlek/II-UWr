#lang racket
(define (cube-root x)
  (define (dist x y)
    (abs (- x y)))

  (define (cube x)
    (* x x x))

  (define (improve approx)
    (/ (+ (/ x (* approx approx)) (* 2 approx)) 3))

  (define (good-enough? approx)
    (< (dist x (cube approx)) 0.00001))

  (define (iter approx)
    (cond
      [(good-enough? approx) approx]
      [else                  (iter (improve approx))]))
  
  (cond
  [(< x 0) (iter (- 1.0))]
  [else (iter 1.0)]))

(define (test x)
    (<= (abs (- (expt x (/ 1 3)) (cube-root x))) 0.00001))

;Dla liczb bliskich 0 sie sypie z powodu utraty cyfr znaczacych
(cube-root 27) (expt 27 (/ 1 3)) (test 27)
(cube-root 0) (expt 0 (/ 1 3)) (test 0)
(cube-root (expt 10 6)) (expt (expt 10 6) (/ 1 3)) (test (expt 10 6))
(cube-root 1) (expt 1 (/ 1 3)) (test 1)
(cube-root 99) (expt 99 (/ 1 3)) (test 99)
(cube-root 0) (expt 0 (/ 1 3)) (test 0)
(cube-root 98765) (expt 98765 (/ 1 3)) (test 98765)
(cube-root 999999) (expt 999999 (/ 1 3)) (test 999999)
(cube-root 2.5) (expt 2.5 (/ 1 3)) (test 2.5)
(cube-root 1.1) (expt 1.1 (/ 1 3)) (test 1.1)
(cube-root 111.111) (expt 111.111 (/ 1 3)) (test 111.111)
(cube-root 13) (expt 13 (/ 1 3)) (test 13)
(cube-root 0.1) (expt 0.1 (/ 1 3)) (test 0.1)


