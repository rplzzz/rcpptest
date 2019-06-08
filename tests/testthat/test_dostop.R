context('Stop function')

test_that('Stop function errors', {
    expect_error(dostop(), 'foo')
})
