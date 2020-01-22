PROGRAM Parallel_Do_Example

INTEGER :: sum = 0
INTEGER :: i

!$OMP PARALLEL DO REDUCTION(+:sum)
  do i = 1,10000
    sum = i + sum
  end do
!$OMP END PARALLEL DO

PRINT *, "Sum of 1 to 100: ", sum

END PROGRAM Parallel_Do_Example
