PROGRAM Parallel_Section_Example

INTEGER :: sum = 0
INTEGER :: i

!$omp parallel sections reduction(+:sum)
!$omp section
  do i = 1,10
    sum = i + sum
  end do
!$omp section
  do i = 1,100
    sum = i + sum
  end do
!$omp section
  do i = 1,1000
    sum = i + sum
  end do
!$omp end parallel sections

PRINT *, "Total sum of workers: ", sum

END PROGRAM Parallel_Section_Example
